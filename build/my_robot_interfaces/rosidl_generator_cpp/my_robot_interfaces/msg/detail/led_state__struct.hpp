// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__LedState __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__LedState __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedState_
{
  using Type = LedState_<ContainerAllocator>;

  explicit LedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_1 = false;
      this->led_2 = false;
      this->led_3 = false;
    }
  }

  explicit LedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_1 = false;
      this->led_2 = false;
      this->led_3 = false;
    }
  }

  // field types and members
  using _led_1_type =
    bool;
  _led_1_type led_1;
  using _led_2_type =
    bool;
  _led_2_type led_2;
  using _led_3_type =
    bool;
  _led_3_type led_3;

  // setters for named parameter idiom
  Type & set__led_1(
    const bool & _arg)
  {
    this->led_1 = _arg;
    return *this;
  }
  Type & set__led_2(
    const bool & _arg)
  {
    this->led_2 = _arg;
    return *this;
  }
  Type & set__led_3(
    const bool & _arg)
  {
    this->led_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::LedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::LedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::LedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::LedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__LedState
    std::shared_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__LedState
    std::shared_ptr<my_robot_interfaces::msg::LedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedState_ & other) const
  {
    if (this->led_1 != other.led_1) {
      return false;
    }
    if (this->led_2 != other.led_2) {
      return false;
    }
    if (this->led_3 != other.led_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedState_

// alias to use template instance with default allocator
using LedState =
  my_robot_interfaces::msg::LedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
