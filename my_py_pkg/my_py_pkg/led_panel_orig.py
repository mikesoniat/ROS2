#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 

from my_robot_interfaces.srv import SetLed
from my_robot_interfaces.msg import LedState

class LedPanelNode(Node): 

    def __init__(self):
        super().__init__("led_panel") 
        panel_state_ = [0,0,0]
        self.publisher_ = self.create_publisher(LedState, 'led_panel_state', 10)
        self.server = self.create_service(SetLed, "set_led", self.callback_set_led)
        self.get_logger().info("LED panel server has been started.")

    def callback_set_led(self, request, response):
        led_number_ = request.led_number
        msg = LedState()
        if request.led_state:
            led_state_ = "on"
        else:
            led_state_ = "off"
        if led_number_ == 1:
            msg.led_1 = request.led_state
        elif led_number_ == 2:
            msg.led_2 = request.led_state
        else:
            msg.led_3 = request.led_state
        self.publisher_.publish(msg)
        self.get_logger().info("Led number: " + str(led_number_) + ", state: " + led_state_)
        response.success = True
        return response


def main(args=None):
    rclpy.init(args=args) # initialize ROS communication
    node = LedPanelNode() 
    rclpy.spin(node)
    rclpy.shutdown() 

if __name__ == "__main__":
    main()
