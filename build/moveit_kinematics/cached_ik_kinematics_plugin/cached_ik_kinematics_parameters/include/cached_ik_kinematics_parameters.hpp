// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace cached_ik_kinematics {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        int64_t max_cache_size = 5000;
        double min_pose_distance = 1.0;
        double min_joint_config_distance = 1.0;
        std::string cached_ik_path = "";
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t max_cache_size = 5000;
        double min_pose_distance = 1.0;
        double min_joint_config_distance = 1.0;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("cached_ik_kinematics"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = logger;
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.max_cache_size = params.max_cache_size;
      output.min_pose_distance = params.min_pose_distance;
      output.min_joint_config_distance = params.min_joint_config_distance;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "max_cache_size")) {
            updated_params.max_cache_size = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_pose_distance")) {
            updated_params.min_pose_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_joint_config_distance")) {
            updated_params.min_joint_config_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cached_ik_path")) {
            updated_params.cached_ik_path = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "max_cache_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum cache size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.max_cache_size);
          parameters_interface_->declare_parameter(prefix_ + "max_cache_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_pose_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum pose distance";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.min_pose_distance);
          parameters_interface_->declare_parameter(prefix_ + "min_pose_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_joint_config_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum joint config distance";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.min_joint_config_distance);
          parameters_interface_->declare_parameter(prefix_ + "min_joint_config_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cached_ik_path")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Cached IK path";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cached_ik_path);
          parameters_interface_->declare_parameter(prefix_ + "cached_ik_path", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "max_cache_size");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_cache_size = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "min_pose_distance");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_pose_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "min_joint_config_distance");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_joint_config_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "cached_ik_path");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cached_ik_path = param.as_string();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("cached_ik_kinematics");
      std::mutex mutable mutex_;
  };

} // namespace cached_ik_kinematics
