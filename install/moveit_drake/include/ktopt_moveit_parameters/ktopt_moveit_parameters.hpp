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



namespace ktopt_interface {

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
        int64_t num_iterations = 1000;
        int64_t num_control_points = 10;
        double trajectory_time_step = 0.01;
        int64_t num_collision_check_points = 25;
        double collision_check_lower_distance_bound = 0.01;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t num_iterations = 1000;
        int64_t num_control_points = 10;
        double trajectory_time_step = 0.01;
        int64_t num_collision_check_points = 25;
        double collision_check_lower_distance_bound = 0.01;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("ktopt_interface"), prefix) {
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
      output.num_iterations = params.num_iterations;
      output.num_control_points = params.num_control_points;
      output.trajectory_time_step = params.trajectory_time_step;
      output.num_collision_check_points = params.num_collision_check_points;
      output.collision_check_lower_distance_bound = params.collision_check_lower_distance_bound;

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
        if (param.get_name() == (prefix_ + "num_iterations")) {
            if(auto validation_result = gt_eq<int64_t>(param, 1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_iterations = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "num_control_points")) {
            if(auto validation_result = gt_eq<int64_t>(param, 1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_control_points = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "trajectory_time_step")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.trajectory_time_step = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "num_collision_check_points")) {
            if(auto validation_result = gt_eq<int64_t>(param, 2);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_collision_check_points = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "collision_check_lower_distance_bound")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.collision_check_lower_distance_bound = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "num_iterations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of iterations for the Drake mathematical program solver.";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_iterations);
          parameters_interface_->declare_parameter(prefix_ + "num_iterations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "num_control_points")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of control points used to represent the B-Spline.";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_control_points);
          parameters_interface_->declare_parameter(prefix_ + "num_control_points", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "trajectory_time_step")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timestep resolution, in seconds, where the KTOpt trajectory is evaluated and reported.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.trajectory_time_step);
          parameters_interface_->declare_parameter(prefix_ + "trajectory_time_step", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "num_collision_check_points")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of collision checks to perform along the trajectory.";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 2;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_collision_check_points);
          parameters_interface_->declare_parameter(prefix_ + "num_collision_check_points", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "collision_check_lower_distance_bound")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lower bound, in meters, for the collision check minimum distance constraint.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.collision_check_lower_distance_bound);
          parameters_interface_->declare_parameter(prefix_ + "collision_check_lower_distance_bound", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "num_iterations");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_iterations': {}", validation_result.error()));
      }
      updated_params.num_iterations = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "num_control_points");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_control_points': {}", validation_result.error()));
      }
      updated_params.num_control_points = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "trajectory_time_step");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'trajectory_time_step': {}", validation_result.error()));
      }
      updated_params.trajectory_time_step = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "num_collision_check_points");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 2);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_collision_check_points': {}", validation_result.error()));
      }
      updated_params.num_collision_check_points = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "collision_check_lower_distance_bound");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'collision_check_lower_distance_bound': {}", validation_result.error()));
      }
      updated_params.collision_check_lower_distance_bound = param.as_double();


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
      rclcpp::Logger logger_ = rclcpp::get_logger("ktopt_interface");
      std::mutex mutable mutex_;
  };

} // namespace ktopt_interface
