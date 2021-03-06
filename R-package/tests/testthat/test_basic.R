context("basic functions")

if(R.Version()$arch != "i386"){##32-bit version is not supported
  
  data(agaricus.train, package='gpboost')
  data(agaricus.test, package='gpboost')
  train <- agaricus.train
  test <- agaricus.test
  
  windows_flag = grepl('Windows', Sys.info()[['sysname']])
  
  test_that("train and predict binary classification", {
    nrounds = 10
    bst <- gpboost(data = train$data, label = train$label, num_leaves = 5,
                   nrounds = nrounds, objective = "binary", metric="binary_error")
    expect_false(is.null(bst$record_evals))
    record_results <- gpb.get.eval.result(bst, "train", "binary_error")
    expect_lt(min(record_results), 0.02)
    
    pred <- predict(bst, test$data)
    expect_equal(length(pred), 1611)
    
    pred1 <- predict(bst, train$data, num_iteration = 1)
    expect_equal(length(pred1), 6513)
    err_pred1 <- sum((pred1 > 0.5) != train$label)/length(train$label)
    err_log <- record_results[1]
    expect_lt(abs(err_pred1 - err_log), 10e-6)
  })
  
  
  test_that("train and predict softmax", {
    lb <- as.numeric(iris$Species) - 1
    
    bst <- gpboost(data = as.matrix(iris[, -5]), label = lb,
                   num_leaves = 4, learning_rate = 0.1, nrounds = 20, min_data=20, min_hess=20,
                   objective = "multiclass", metric="multi_error", num_class=3)
    
    expect_false(is.null(bst$record_evals))
    record_results <- gpb.get.eval.result(bst, "train", "multi_error")
    expect_lt(min(record_results), 0.03)
    
    pred <- predict(bst, as.matrix(iris[, -5]))
    expect_equal(length(pred), nrow(iris) * 3)
  })
  
  
  test_that("use of multiple eval metrics works", {
    bst <- gpboost(data = train$data, label = train$label, num_leaves = 4,
                   learning_rate=1, nrounds = 10, objective = "binary",
                   metric = list("binary_error","auc","binary_logloss") )
    expect_false(is.null(bst$record_evals))
  })
  
  
  test_that("training continuation works", {
    testthat::skip("This test is currently broken. See issue #2468 for details.")
    dtrain <- gpb.Dataset(train$data, label = train$label, free_raw_data=FALSE)
    watchlist = list(train=dtrain)
    param <- list(objective = "binary", metric="binary_logloss", num_leaves = 5, learning_rate = 1)
    
    # for the reference, use 10 iterations at once:
    bst <- gpb.train(param, dtrain, nrounds = 10, watchlist)
    err_bst <- gpb.get.eval.result(bst, "train", "binary_logloss", 10)
    # first 5 iterations:
    bst1 <- gpb.train(param, dtrain, nrounds = 5, watchlist)
    # test continuing from a model in file
    gpb.save(bst1, "gpboost.model")
    # continue for 5 more:
    bst2 <- gpb.train(param, dtrain, nrounds = 5, watchlist, init_model = bst1)
    err_bst2 <- gpb.get.eval.result(bst2, "train", "binary_logloss", 10)
    expect_lt(abs(err_bst - err_bst2), 0.01)
    
    bst2 <- gpb.train(param, dtrain, nrounds = 5, watchlist, init_model = "gpboost.model")
    err_bst2 <- gpb.get.eval.result(bst2, "train", "binary_logloss", 10)
    expect_lt(abs(err_bst - err_bst2), 0.01)
  })
  
  
  test_that("cv works", {
    dtrain <- gpb.Dataset(train$data, label=train$label)
    params <- list(objective="regression", metric="l2,l1")
    bst <- gpb.cv(params, dtrain, 10, nfold=5, min_data=1, learning_rate=1, early_stopping_rounds=10)
    expect_false(is.null(bst$record_evals))
  })
  
}