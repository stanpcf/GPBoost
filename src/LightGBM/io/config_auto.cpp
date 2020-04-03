/*!
 * Original work Copyright (c) 2016 Microsoft Corporation. All rights reserved.
 * Modified work Copyright (c) 2020 Fabio Sigrist. All rights reserved.
 * Licensed under the Apache License Version 2.0 See LICENSE file in the project root for license information.
 *
 * \note
 * This file is auto generated by GPBoost\helpers\parameter_generator.py from GPBoost\include\LightGBM\config.h file.
 */
#include<LightGBM/config.h>
namespace LightGBM {
std::unordered_map<std::string, std::string> Config::alias_table({
  {"config_file", "config"},
  {"task_type", "task"},
  {"objective_type", "objective"},
  {"app", "objective"},
  {"application", "objective"},
  {"boosting_type", "boosting"},
  {"boost", "boosting"},
  {"train", "data"},
  {"train_data", "data"},
  {"train_data_file", "data"},
  {"data_filename", "data"},
  {"test", "valid"},
  {"valid_data", "valid"},
  {"valid_data_file", "valid"},
  {"test_data", "valid"},
  {"test_data_file", "valid"},
  {"valid_filenames", "valid"},
  {"num_iteration", "num_iterations"},
  {"n_iter", "num_iterations"},
  {"num_tree", "num_iterations"},
  {"num_trees", "num_iterations"},
  {"num_round", "num_iterations"},
  {"num_rounds", "num_iterations"},
  {"num_boost_round", "num_iterations"},
  {"n_estimators", "num_iterations"},
  {"shrinkage_rate", "learning_rate"},
  {"eta", "learning_rate"},
  {"num_leaf", "num_leaves"},
  {"max_leaves", "num_leaves"},
  {"max_leaf", "num_leaves"},
  {"tree", "tree_learner"},
  {"tree_type", "tree_learner"},
  {"tree_learner_type", "tree_learner"},
  {"num_thread", "num_threads"},
  {"nthread", "num_threads"},
  {"nthreads", "num_threads"},
  {"n_jobs", "num_threads"},
  {"device", "device_type"},
  {"random_seed", "seed"},
  {"random_state", "seed"},
  {"min_data_per_leaf", "min_data_in_leaf"},
  {"min_data", "min_data_in_leaf"},
  {"min_child_samples", "min_data_in_leaf"},
  {"min_sum_hessian_per_leaf", "min_sum_hessian_in_leaf"},
  {"min_sum_hessian", "min_sum_hessian_in_leaf"},
  {"min_hessian", "min_sum_hessian_in_leaf"},
  {"min_child_weight", "min_sum_hessian_in_leaf"},
  {"sub_row", "bagging_fraction"},
  {"subsample", "bagging_fraction"},
  {"bagging", "bagging_fraction"},
  {"pos_sub_row", "pos_bagging_fraction"},
  {"pos_subsample", "pos_bagging_fraction"},
  {"pos_bagging", "pos_bagging_fraction"},
  {"neg_sub_row", "neg_bagging_fraction"},
  {"neg_subsample", "neg_bagging_fraction"},
  {"neg_bagging", "neg_bagging_fraction"},
  {"subsample_freq", "bagging_freq"},
  {"bagging_fraction_seed", "bagging_seed"},
  {"sub_feature", "feature_fraction"},
  {"colsample_bytree", "feature_fraction"},
  {"sub_feature_bynode", "feature_fraction_bynode"},
  {"colsample_bynode", "feature_fraction_bynode"},
  {"early_stopping_rounds", "early_stopping_round"},
  {"early_stopping", "early_stopping_round"},
  {"n_iter_no_change", "early_stopping_round"},
  {"max_tree_output", "max_delta_step"},
  {"max_leaf_output", "max_delta_step"},
  {"reg_alpha", "lambda_l1"},
  {"reg_lambda", "lambda_l2"},
  {"lambda", "lambda_l2"},
  {"min_split_gain", "min_gain_to_split"},
  {"rate_drop", "drop_rate"},
  {"topk", "top_k"},
  {"mc", "monotone_constraints"},
  {"monotone_constraint", "monotone_constraints"},
  {"feature_contrib", "feature_contri"},
  {"fc", "feature_contri"},
  {"fp", "feature_contri"},
  {"feature_penalty", "feature_contri"},
  {"fs", "forcedsplits_filename"},
  {"forced_splits_filename", "forcedsplits_filename"},
  {"forced_splits_file", "forcedsplits_filename"},
  {"forced_splits", "forcedsplits_filename"},
  {"verbose", "verbosity"},
  {"subsample_for_bin", "bin_construct_sample_cnt"},
  {"hist_pool_size", "histogram_pool_size"},
  {"data_seed", "data_random_seed"},
  {"model_output", "output_model"},
  {"model_out", "output_model"},
  {"save_period", "snapshot_freq"},
  {"model_input", "input_model"},
  {"model_in", "input_model"},
  {"predict_result", "output_result"},
  {"prediction_result", "output_result"},
  {"predict_name", "output_result"},
  {"prediction_name", "output_result"},
  {"pred_name", "output_result"},
  {"name_pred", "output_result"},
  {"init_score_filename", "initscore_filename"},
  {"init_score_file", "initscore_filename"},
  {"init_score", "initscore_filename"},
  {"input_init_score", "initscore_filename"},
  {"valid_data_init_scores", "valid_data_initscores"},
  {"valid_init_score_file", "valid_data_initscores"},
  {"valid_init_score", "valid_data_initscores"},
  {"is_pre_partition", "pre_partition"},
  {"is_enable_bundle", "enable_bundle"},
  {"bundle", "enable_bundle"},
  {"is_sparse", "is_enable_sparse"},
  {"enable_sparse", "is_enable_sparse"},
  {"sparse", "is_enable_sparse"},
  {"two_round_loading", "two_round"},
  {"use_two_round_loading", "two_round"},
  {"is_save_binary", "save_binary"},
  {"is_save_binary_file", "save_binary"},
  {"has_header", "header"},
  {"label", "label_column"},
  {"weight", "weight_column"},
  {"group", "group_column"},
  {"group_id", "group_column"},
  {"query_column", "group_column"},
  {"query", "group_column"},
  {"query_id", "group_column"},
  {"ignore_feature", "ignore_column"},
  {"blacklist", "ignore_column"},
  {"cat_feature", "categorical_feature"},
  {"categorical_column", "categorical_feature"},
  {"cat_column", "categorical_feature"},
  {"is_predict_raw_score", "predict_raw_score"},
  {"predict_rawscore", "predict_raw_score"},
  {"raw_score", "predict_raw_score"},
  {"is_predict_leaf_index", "predict_leaf_index"},
  {"leaf_index", "predict_leaf_index"},
  {"is_predict_contrib", "predict_contrib"},
  {"contrib", "predict_contrib"},
  {"convert_model_file", "convert_model"},
  {"num_classes", "num_class"},
  {"unbalance", "is_unbalance"},
  {"unbalanced_sets", "is_unbalance"},
  {"metrics", "metric"},
  {"metric_types", "metric"},
  {"output_freq", "metric_freq"},
  {"training_metric", "is_provide_training_metric"},
  {"is_training_metric", "is_provide_training_metric"},
  {"train_metric", "is_provide_training_metric"},
  {"ndcg_eval_at", "eval_at"},
  {"ndcg_at", "eval_at"},
  {"map_eval_at", "eval_at"},
  {"map_at", "eval_at"},
  {"num_machine", "num_machines"},
  {"local_port", "local_listen_port"},
  {"port", "local_listen_port"},
  {"machine_list_file", "machine_list_filename"},
  {"machine_list", "machine_list_filename"},
  {"mlist", "machine_list_filename"},
  {"workers", "machines"},
  {"nodes", "machines"},
});

std::unordered_set<std::string> Config::parameter_set({
  "config",
  "task",
  "objective",
  "boosting",
  "data",
  "valid",
  "num_iterations",
  "learning_rate",
  "num_leaves",
  "tree_learner",
  "num_threads",
  "device_type",
  "seed",
  "has_gp_model",
  "train_gp_model_cov_pars",
  "leaves_newton_update",
  "use_gp_model_for_validation",
  "use_nesterov_acc",
  "nesterov_acc_rate",
  "momentum_offset",
  "momentum_schedule_version",
  "max_depth",
  "min_data_in_leaf",
  "min_sum_hessian_in_leaf",
  "bagging_fraction",
  "pos_bagging_fraction",
  "neg_bagging_fraction",
  "bagging_freq",
  "bagging_seed",
  "feature_fraction",
  "feature_fraction_bynode",
  "feature_fraction_seed",
  "early_stopping_round",
  "first_metric_only",
  "max_delta_step",
  "lambda_l1",
  "lambda_l2",
  "min_gain_to_split",
  "drop_rate",
  "max_drop",
  "skip_drop",
  "xgboost_dart_mode",
  "uniform_drop",
  "drop_seed",
  "top_rate",
  "other_rate",
  "min_data_per_group",
  "max_cat_threshold",
  "cat_l2",
  "cat_smooth",
  "max_cat_to_onehot",
  "top_k",
  "monotone_constraints",
  "feature_contri",
  "forcedsplits_filename",
  "forcedbins_filename",
  "refit_decay_rate",
  "cegb_tradeoff",
  "cegb_penalty_split",
  "cegb_penalty_feature_lazy",
  "cegb_penalty_feature_coupled",
  "verbosity",
  "max_bin",
  "max_bin_by_feature",
  "min_data_in_bin",
  "bin_construct_sample_cnt",
  "histogram_pool_size",
  "data_random_seed",
  "output_model",
  "snapshot_freq",
  "input_model",
  "output_result",
  "initscore_filename",
  "valid_data_initscores",
  "pre_partition",
  "enable_bundle",
  "max_conflict_rate",
  "is_enable_sparse",
  "sparse_threshold",
  "use_missing",
  "zero_as_missing",
  "two_round",
  "save_binary",
  "header",
  "label_column",
  "weight_column",
  "group_column",
  "ignore_column",
  "categorical_feature",
  "predict_raw_score",
  "predict_leaf_index",
  "predict_contrib",
  "num_iteration_predict",
  "pred_early_stop",
  "pred_early_stop_freq",
  "pred_early_stop_margin",
  "convert_model_language",
  "convert_model",
  "num_class",
  "is_unbalance",
  "scale_pos_weight",
  "sigmoid",
  "boost_from_average",
  "reg_sqrt",
  "alpha",
  "fair_c",
  "poisson_max_delta_step",
  "tweedie_variance_power",
  "max_position",
  "lambdamart_norm",
  "label_gain",
  "metric",
  "metric_freq",
  "is_provide_training_metric",
  "eval_at",
  "multi_error_top_k",
  "num_machines",
  "local_listen_port",
  "time_out",
  "machine_list_filename",
  "machines",
  "gpu_platform_id",
  "gpu_device_id",
  "gpu_use_dp",
});

void Config::GetMembersFromString(const std::unordered_map<std::string, std::string>& params) {
  std::string tmp_str = "";
  GetString(params, "data", &data);

  if (GetString(params, "valid", &tmp_str)) {
    valid = Common::Split(tmp_str.c_str(), ',');
  }

  GetInt(params, "num_iterations", &num_iterations);
  CHECK(num_iterations >=0);

  GetDouble(params, "learning_rate", &learning_rate);
  CHECK(learning_rate >0.0);

  GetInt(params, "num_leaves", &num_leaves);
  CHECK(num_leaves >1);
  CHECK(num_leaves <=131072);

  GetInt(params, "num_threads", &num_threads);

  GetBool(params, "has_gp_model", &has_gp_model);

  GetBool(params, "train_gp_model_cov_pars", &train_gp_model_cov_pars);

  GetBool(params, "leaves_newton_update", &leaves_newton_update);

  GetBool(params, "use_gp_model_for_validation", &use_gp_model_for_validation);

  GetBool(params, "use_nesterov_acc", &use_nesterov_acc);

  GetDouble(params, "nesterov_acc_rate", &nesterov_acc_rate);

  GetInt(params, "momentum_offset", &momentum_offset);

  GetInt(params, "momentum_schedule_version", &momentum_schedule_version);

  GetInt(params, "max_depth", &max_depth);

  GetInt(params, "min_data_in_leaf", &min_data_in_leaf);
  CHECK(min_data_in_leaf >=0);

  GetDouble(params, "min_sum_hessian_in_leaf", &min_sum_hessian_in_leaf);
  CHECK(min_sum_hessian_in_leaf >=0.0);

  GetDouble(params, "bagging_fraction", &bagging_fraction);
  CHECK(bagging_fraction >0.0);
  CHECK(bagging_fraction <=1.0);

  GetDouble(params, "pos_bagging_fraction", &pos_bagging_fraction);
  CHECK(pos_bagging_fraction >0.0);
  CHECK(pos_bagging_fraction <=1.0);

  GetDouble(params, "neg_bagging_fraction", &neg_bagging_fraction);
  CHECK(neg_bagging_fraction >0.0);
  CHECK(neg_bagging_fraction <=1.0);

  GetInt(params, "bagging_freq", &bagging_freq);

  GetInt(params, "bagging_seed", &bagging_seed);

  GetDouble(params, "feature_fraction", &feature_fraction);
  CHECK(feature_fraction >0.0);
  CHECK(feature_fraction <=1.0);

  GetDouble(params, "feature_fraction_bynode", &feature_fraction_bynode);
  CHECK(feature_fraction_bynode >0.0);
  CHECK(feature_fraction_bynode <=1.0);

  GetInt(params, "feature_fraction_seed", &feature_fraction_seed);

  GetInt(params, "early_stopping_round", &early_stopping_round);

  GetBool(params, "first_metric_only", &first_metric_only);

  GetDouble(params, "max_delta_step", &max_delta_step);

  GetDouble(params, "lambda_l1", &lambda_l1);
  CHECK(lambda_l1 >=0.0);

  GetDouble(params, "lambda_l2", &lambda_l2);
  CHECK(lambda_l2 >=0.0);

  GetDouble(params, "min_gain_to_split", &min_gain_to_split);
  CHECK(min_gain_to_split >=0.0);

  GetDouble(params, "drop_rate", &drop_rate);
  CHECK(drop_rate >=0.0);
  CHECK(drop_rate <=1.0);

  GetInt(params, "max_drop", &max_drop);

  GetDouble(params, "skip_drop", &skip_drop);
  CHECK(skip_drop >=0.0);
  CHECK(skip_drop <=1.0);

  GetBool(params, "xgboost_dart_mode", &xgboost_dart_mode);

  GetBool(params, "uniform_drop", &uniform_drop);

  GetInt(params, "drop_seed", &drop_seed);

  GetDouble(params, "top_rate", &top_rate);
  CHECK(top_rate >=0.0);
  CHECK(top_rate <=1.0);

  GetDouble(params, "other_rate", &other_rate);
  CHECK(other_rate >=0.0);
  CHECK(other_rate <=1.0);

  GetInt(params, "min_data_per_group", &min_data_per_group);
  CHECK(min_data_per_group >0);

  GetInt(params, "max_cat_threshold", &max_cat_threshold);
  CHECK(max_cat_threshold >0);

  GetDouble(params, "cat_l2", &cat_l2);
  CHECK(cat_l2 >=0.0);

  GetDouble(params, "cat_smooth", &cat_smooth);
  CHECK(cat_smooth >=0.0);

  GetInt(params, "max_cat_to_onehot", &max_cat_to_onehot);
  CHECK(max_cat_to_onehot >0);

  GetInt(params, "top_k", &top_k);
  CHECK(top_k >0);

  if (GetString(params, "monotone_constraints", &tmp_str)) {
    monotone_constraints = Common::StringToArray<int8_t>(tmp_str, ',');
  }

  if (GetString(params, "feature_contri", &tmp_str)) {
    feature_contri = Common::StringToArray<double>(tmp_str, ',');
  }

  GetString(params, "forcedsplits_filename", &forcedsplits_filename);

  GetString(params, "forcedbins_filename", &forcedbins_filename);

  GetDouble(params, "refit_decay_rate", &refit_decay_rate);
  CHECK(refit_decay_rate >=0.0);
  CHECK(refit_decay_rate <=1.0);

  GetDouble(params, "cegb_tradeoff", &cegb_tradeoff);
  CHECK(cegb_tradeoff >=0.0);

  GetDouble(params, "cegb_penalty_split", &cegb_penalty_split);
  CHECK(cegb_penalty_split >=0.0);

  if (GetString(params, "cegb_penalty_feature_lazy", &tmp_str)) {
    cegb_penalty_feature_lazy = Common::StringToArray<double>(tmp_str, ',');
  }

  if (GetString(params, "cegb_penalty_feature_coupled", &tmp_str)) {
    cegb_penalty_feature_coupled = Common::StringToArray<double>(tmp_str, ',');
  }

  GetInt(params, "verbosity", &verbosity);

  GetInt(params, "max_bin", &max_bin);
  CHECK(max_bin >1);

  if (GetString(params, "max_bin_by_feature", &tmp_str)) {
    max_bin_by_feature = Common::StringToArray<int32_t>(tmp_str, ',');
  }

  GetInt(params, "min_data_in_bin", &min_data_in_bin);
  CHECK(min_data_in_bin >0);

  GetInt(params, "bin_construct_sample_cnt", &bin_construct_sample_cnt);
  CHECK(bin_construct_sample_cnt >0);

  GetDouble(params, "histogram_pool_size", &histogram_pool_size);

  GetInt(params, "data_random_seed", &data_random_seed);

  GetString(params, "output_model", &output_model);

  GetInt(params, "snapshot_freq", &snapshot_freq);

  GetString(params, "input_model", &input_model);

  GetString(params, "output_result", &output_result);

  GetString(params, "initscore_filename", &initscore_filename);

  if (GetString(params, "valid_data_initscores", &tmp_str)) {
    valid_data_initscores = Common::Split(tmp_str.c_str(), ',');
  }

  GetBool(params, "pre_partition", &pre_partition);

  GetBool(params, "enable_bundle", &enable_bundle);

  GetDouble(params, "max_conflict_rate", &max_conflict_rate);
  CHECK(max_conflict_rate >=0.0);
  CHECK(max_conflict_rate <1.0);

  GetBool(params, "is_enable_sparse", &is_enable_sparse);

  GetDouble(params, "sparse_threshold", &sparse_threshold);
  CHECK(sparse_threshold >0.0);
  CHECK(sparse_threshold <=1.0);

  GetBool(params, "use_missing", &use_missing);

  GetBool(params, "zero_as_missing", &zero_as_missing);

  GetBool(params, "two_round", &two_round);

  GetBool(params, "save_binary", &save_binary);

  GetBool(params, "header", &header);

  GetString(params, "label_column", &label_column);

  GetString(params, "weight_column", &weight_column);

  GetString(params, "group_column", &group_column);

  GetString(params, "ignore_column", &ignore_column);

  GetString(params, "categorical_feature", &categorical_feature);

  GetBool(params, "predict_raw_score", &predict_raw_score);

  GetBool(params, "predict_leaf_index", &predict_leaf_index);

  GetBool(params, "predict_contrib", &predict_contrib);

  GetInt(params, "num_iteration_predict", &num_iteration_predict);

  GetBool(params, "pred_early_stop", &pred_early_stop);

  GetInt(params, "pred_early_stop_freq", &pred_early_stop_freq);

  GetDouble(params, "pred_early_stop_margin", &pred_early_stop_margin);

  GetString(params, "convert_model_language", &convert_model_language);

  GetString(params, "convert_model", &convert_model);

  GetInt(params, "num_class", &num_class);
  CHECK(num_class >0);

  GetBool(params, "is_unbalance", &is_unbalance);

  GetDouble(params, "scale_pos_weight", &scale_pos_weight);
  CHECK(scale_pos_weight >0.0);

  GetDouble(params, "sigmoid", &sigmoid);
  CHECK(sigmoid >0.0);

  GetBool(params, "boost_from_average", &boost_from_average);

  GetBool(params, "reg_sqrt", &reg_sqrt);

  GetDouble(params, "alpha", &alpha);
  CHECK(alpha >0.0);

  GetDouble(params, "fair_c", &fair_c);
  CHECK(fair_c >0.0);

  GetDouble(params, "poisson_max_delta_step", &poisson_max_delta_step);
  CHECK(poisson_max_delta_step >0.0);

  GetDouble(params, "tweedie_variance_power", &tweedie_variance_power);
  CHECK(tweedie_variance_power >=1.0);
  CHECK(tweedie_variance_power <2.0);

  GetInt(params, "max_position", &max_position);
  CHECK(max_position >0);

  GetBool(params, "lambdamart_norm", &lambdamart_norm);

  if (GetString(params, "label_gain", &tmp_str)) {
    label_gain = Common::StringToArray<double>(tmp_str, ',');
  }

  GetInt(params, "metric_freq", &metric_freq);
  CHECK(metric_freq >0);

  GetBool(params, "is_provide_training_metric", &is_provide_training_metric);

  if (GetString(params, "eval_at", &tmp_str)) {
    eval_at = Common::StringToArray<int>(tmp_str, ',');
  }

  GetInt(params, "multi_error_top_k", &multi_error_top_k);
  CHECK(multi_error_top_k >0);

  GetInt(params, "num_machines", &num_machines);
  CHECK(num_machines >0);

  GetInt(params, "local_listen_port", &local_listen_port);
  CHECK(local_listen_port >0);

  GetInt(params, "time_out", &time_out);
  CHECK(time_out >0);

  GetString(params, "machine_list_filename", &machine_list_filename);

  GetString(params, "machines", &machines);

  GetInt(params, "gpu_platform_id", &gpu_platform_id);

  GetInt(params, "gpu_device_id", &gpu_device_id);

  GetBool(params, "gpu_use_dp", &gpu_use_dp);
}

std::string Config::SaveMembersToString() const {
  std::stringstream str_buf;
  str_buf << "[data: " << data << "]\n";
  str_buf << "[valid: " << Common::Join(valid, ",") << "]\n";
  str_buf << "[num_iterations: " << num_iterations << "]\n";
  str_buf << "[learning_rate: " << learning_rate << "]\n";
  str_buf << "[num_leaves: " << num_leaves << "]\n";
  str_buf << "[num_threads: " << num_threads << "]\n";
  str_buf << "[has_gp_model: " << has_gp_model << "]\n";
  str_buf << "[train_gp_model_cov_pars: " << train_gp_model_cov_pars << "]\n";
  str_buf << "[leaves_newton_update: " << leaves_newton_update << "]\n";
  str_buf << "[use_gp_model_for_validation: " << use_gp_model_for_validation << "]\n";
  str_buf << "[use_nesterov_acc: " << use_nesterov_acc << "]\n";
  str_buf << "[nesterov_acc_rate: " << nesterov_acc_rate << "]\n";
  str_buf << "[momentum_offset: " << momentum_offset << "]\n";
  str_buf << "[momentum_schedule_version: " << momentum_schedule_version << "]\n";
  str_buf << "[max_depth: " << max_depth << "]\n";
  str_buf << "[min_data_in_leaf: " << min_data_in_leaf << "]\n";
  str_buf << "[min_sum_hessian_in_leaf: " << min_sum_hessian_in_leaf << "]\n";
  str_buf << "[bagging_fraction: " << bagging_fraction << "]\n";
  str_buf << "[pos_bagging_fraction: " << pos_bagging_fraction << "]\n";
  str_buf << "[neg_bagging_fraction: " << neg_bagging_fraction << "]\n";
  str_buf << "[bagging_freq: " << bagging_freq << "]\n";
  str_buf << "[bagging_seed: " << bagging_seed << "]\n";
  str_buf << "[feature_fraction: " << feature_fraction << "]\n";
  str_buf << "[feature_fraction_bynode: " << feature_fraction_bynode << "]\n";
  str_buf << "[feature_fraction_seed: " << feature_fraction_seed << "]\n";
  str_buf << "[early_stopping_round: " << early_stopping_round << "]\n";
  str_buf << "[first_metric_only: " << first_metric_only << "]\n";
  str_buf << "[max_delta_step: " << max_delta_step << "]\n";
  str_buf << "[lambda_l1: " << lambda_l1 << "]\n";
  str_buf << "[lambda_l2: " << lambda_l2 << "]\n";
  str_buf << "[min_gain_to_split: " << min_gain_to_split << "]\n";
  str_buf << "[drop_rate: " << drop_rate << "]\n";
  str_buf << "[max_drop: " << max_drop << "]\n";
  str_buf << "[skip_drop: " << skip_drop << "]\n";
  str_buf << "[xgboost_dart_mode: " << xgboost_dart_mode << "]\n";
  str_buf << "[uniform_drop: " << uniform_drop << "]\n";
  str_buf << "[drop_seed: " << drop_seed << "]\n";
  str_buf << "[top_rate: " << top_rate << "]\n";
  str_buf << "[other_rate: " << other_rate << "]\n";
  str_buf << "[min_data_per_group: " << min_data_per_group << "]\n";
  str_buf << "[max_cat_threshold: " << max_cat_threshold << "]\n";
  str_buf << "[cat_l2: " << cat_l2 << "]\n";
  str_buf << "[cat_smooth: " << cat_smooth << "]\n";
  str_buf << "[max_cat_to_onehot: " << max_cat_to_onehot << "]\n";
  str_buf << "[top_k: " << top_k << "]\n";
  str_buf << "[monotone_constraints: " << Common::Join(Common::ArrayCast<int8_t, int>(monotone_constraints), ",") << "]\n";
  str_buf << "[feature_contri: " << Common::Join(feature_contri, ",") << "]\n";
  str_buf << "[forcedsplits_filename: " << forcedsplits_filename << "]\n";
  str_buf << "[forcedbins_filename: " << forcedbins_filename << "]\n";
  str_buf << "[refit_decay_rate: " << refit_decay_rate << "]\n";
  str_buf << "[cegb_tradeoff: " << cegb_tradeoff << "]\n";
  str_buf << "[cegb_penalty_split: " << cegb_penalty_split << "]\n";
  str_buf << "[cegb_penalty_feature_lazy: " << Common::Join(cegb_penalty_feature_lazy, ",") << "]\n";
  str_buf << "[cegb_penalty_feature_coupled: " << Common::Join(cegb_penalty_feature_coupled, ",") << "]\n";
  str_buf << "[verbosity: " << verbosity << "]\n";
  str_buf << "[max_bin: " << max_bin << "]\n";
  str_buf << "[max_bin_by_feature: " << Common::Join(max_bin_by_feature, ",") << "]\n";
  str_buf << "[min_data_in_bin: " << min_data_in_bin << "]\n";
  str_buf << "[bin_construct_sample_cnt: " << bin_construct_sample_cnt << "]\n";
  str_buf << "[histogram_pool_size: " << histogram_pool_size << "]\n";
  str_buf << "[data_random_seed: " << data_random_seed << "]\n";
  str_buf << "[output_model: " << output_model << "]\n";
  str_buf << "[snapshot_freq: " << snapshot_freq << "]\n";
  str_buf << "[input_model: " << input_model << "]\n";
  str_buf << "[output_result: " << output_result << "]\n";
  str_buf << "[initscore_filename: " << initscore_filename << "]\n";
  str_buf << "[valid_data_initscores: " << Common::Join(valid_data_initscores, ",") << "]\n";
  str_buf << "[pre_partition: " << pre_partition << "]\n";
  str_buf << "[enable_bundle: " << enable_bundle << "]\n";
  str_buf << "[max_conflict_rate: " << max_conflict_rate << "]\n";
  str_buf << "[is_enable_sparse: " << is_enable_sparse << "]\n";
  str_buf << "[sparse_threshold: " << sparse_threshold << "]\n";
  str_buf << "[use_missing: " << use_missing << "]\n";
  str_buf << "[zero_as_missing: " << zero_as_missing << "]\n";
  str_buf << "[two_round: " << two_round << "]\n";
  str_buf << "[save_binary: " << save_binary << "]\n";
  str_buf << "[header: " << header << "]\n";
  str_buf << "[label_column: " << label_column << "]\n";
  str_buf << "[weight_column: " << weight_column << "]\n";
  str_buf << "[group_column: " << group_column << "]\n";
  str_buf << "[ignore_column: " << ignore_column << "]\n";
  str_buf << "[categorical_feature: " << categorical_feature << "]\n";
  str_buf << "[predict_raw_score: " << predict_raw_score << "]\n";
  str_buf << "[predict_leaf_index: " << predict_leaf_index << "]\n";
  str_buf << "[predict_contrib: " << predict_contrib << "]\n";
  str_buf << "[num_iteration_predict: " << num_iteration_predict << "]\n";
  str_buf << "[pred_early_stop: " << pred_early_stop << "]\n";
  str_buf << "[pred_early_stop_freq: " << pred_early_stop_freq << "]\n";
  str_buf << "[pred_early_stop_margin: " << pred_early_stop_margin << "]\n";
  str_buf << "[convert_model_language: " << convert_model_language << "]\n";
  str_buf << "[convert_model: " << convert_model << "]\n";
  str_buf << "[num_class: " << num_class << "]\n";
  str_buf << "[is_unbalance: " << is_unbalance << "]\n";
  str_buf << "[scale_pos_weight: " << scale_pos_weight << "]\n";
  str_buf << "[sigmoid: " << sigmoid << "]\n";
  str_buf << "[boost_from_average: " << boost_from_average << "]\n";
  str_buf << "[reg_sqrt: " << reg_sqrt << "]\n";
  str_buf << "[alpha: " << alpha << "]\n";
  str_buf << "[fair_c: " << fair_c << "]\n";
  str_buf << "[poisson_max_delta_step: " << poisson_max_delta_step << "]\n";
  str_buf << "[tweedie_variance_power: " << tweedie_variance_power << "]\n";
  str_buf << "[max_position: " << max_position << "]\n";
  str_buf << "[lambdamart_norm: " << lambdamart_norm << "]\n";
  str_buf << "[label_gain: " << Common::Join(label_gain, ",") << "]\n";
  str_buf << "[metric_freq: " << metric_freq << "]\n";
  str_buf << "[is_provide_training_metric: " << is_provide_training_metric << "]\n";
  str_buf << "[eval_at: " << Common::Join(eval_at, ",") << "]\n";
  str_buf << "[multi_error_top_k: " << multi_error_top_k << "]\n";
  str_buf << "[num_machines: " << num_machines << "]\n";
  str_buf << "[local_listen_port: " << local_listen_port << "]\n";
  str_buf << "[time_out: " << time_out << "]\n";
  str_buf << "[machine_list_filename: " << machine_list_filename << "]\n";
  str_buf << "[machines: " << machines << "]\n";
  str_buf << "[gpu_platform_id: " << gpu_platform_id << "]\n";
  str_buf << "[gpu_device_id: " << gpu_device_id << "]\n";
  str_buf << "[gpu_use_dp: " << gpu_use_dp << "]\n";
  return str_buf.str();
}

}  // namespace LightGBM
