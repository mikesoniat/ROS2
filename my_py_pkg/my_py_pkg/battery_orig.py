#!/usr/bin/env python3
import rclpy
import time 
from rclpy.node import Node 
from functools import partial

from my_robot_interfaces.srv import SetLed

class BatteryNode(Node): 

    def __init__(self):
        super().__init__("battery") 
        led_number_ = 3
      
        while True:
            battery_state_ = False
            self.call_set_led(led_number_, battery_state_)
            time.sleep(4)
            battery_state_ = True
            self.call_set_led(led_number_, battery_state_)
            time.sleep(6)

    def call_set_led(self, number, state):
        client = self.create_client(SetLed, "set_led")
        while not client.wait_for_service(1.0):
            self.get_logger().info("Waiting for LED panel server...")

        request = SetLed.Request()
        request.led_number = number
        request.led_state = state 

        future = client.call_async(request) 
        future.add_done_callback(partial(self.callback_call_set_led, number=number, state=state))        

    def callback_call_set_led(self, future, number, state):
        try:
            response = future.result()
            self.get_logger().info("LED Number: " + str(number) + ", state: " + str(state))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

def main(args=None):
    rclpy.init(args=args) # initialize ROS communication
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown() 

if __name__ == "__main__":
    main()