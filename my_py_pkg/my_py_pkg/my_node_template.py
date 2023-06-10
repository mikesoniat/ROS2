#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 

class MyCustomNode(Node): # CLASS NAME

    def __init__(self):
        super().__init__("py_test") # NODE NAME


def main(args=None):
    rclpy.init(args=args) # initialize ROS communication
    node = MyCustomNode() # CLASS NAME
    rclpy.spin(node)
    rclpy.shutdown() 

if __name__ == "__main__":
    main()
