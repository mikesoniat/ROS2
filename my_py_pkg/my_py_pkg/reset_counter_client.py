#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
from functools import partial 
from example_interfaces.srv import SetBool

class ResetCounterNode(Node): 

    def __init__(self):
        super().__init__("reset_counter_client")
        self.call_number_publisher(True)

    def call_number_publisher(self, data):
        client = self.create_client(SetBool, "reset_counter")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Number Counter") 

        request = SetBool.Request()
        request.data = data

        future = client.call_async(request) 
        future.add_done_callback(partial(self.callback_call_reset_counter, data=data))

    def callback_call_reset_counter(self, future, data):
        try:
            response = future.result()
            self.get_logger().info(str(data))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args) # initialize ROS communication
    node = ResetCounterNode() 
    rclpy.shutdown() 

if __name__ == "__main__":
    main()
