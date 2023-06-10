#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 

from example_interfaces.msg import Int64 

class NumberCounter(Node): # CLASS NAME

    def __init__(self):
        super().__init__("number_counter") # NODE NAME
        self.counter_ = 0
        self.subscriber_ = self.create_subscription(Int64, "number", self.callback_counter, 10)
        self.get_logger().info("Number Counter has been started.")
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.get_logger().info("Number Publisher has been started")

    def callback_counter(self, msg):
        self.counter_ += msg.data
        msg2 = Int64()
        msg2.data = self.counter_        
        self.publisher_.publish(msg2)
        self.get_logger().info(str(self.counter_))

def main(args=None):
    rclpy.init(args=args) # initialize ROS communication
    node = NumberCounter() # CLASS NAME
    rclpy.spin(node)
    rclpy.shutdown() 

if __name__ == "__main__":
    main()
