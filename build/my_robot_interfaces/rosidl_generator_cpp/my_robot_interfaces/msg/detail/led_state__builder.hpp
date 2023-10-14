// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedState_led_3
{
public:
  explicit Init_LedState_led_3(::my_robot_interfaces::msg::LedState & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::LedState led_3(::my_robot_interfaces::msg::LedState::_led_3_type arg)
  {
    msg_.led_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedState msg_;
};

class Init_LedState_led_2
{
public:
  explicit Init_LedState_led_2(::my_robot_interfaces::msg::LedState & msg)
  : msg_(msg)
  {}
  Init_LedState_led_3 led_2(::my_robot_interfaces::msg::LedState::_led_2_type arg)
  {
    msg_.led_2 = std::move(arg);
    return Init_LedState_led_3(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedState msg_;
};

class Init_LedState_led_1
{
public:
  Init_LedState_led_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedState_led_2 led_1(::my_robot_interfaces::msg::LedState::_led_1_type arg)
  {
    msg_.led_1 = std::move(arg);
    return Init_LedState_led_2(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::LedState>()
{
  return my_robot_interfaces::msg::builder::Init_LedState_led_1();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
