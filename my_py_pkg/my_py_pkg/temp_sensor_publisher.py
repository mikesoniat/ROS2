#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class TemperatureSensor(Node):
    def __init__(self):
        super().__init__('temperature_sensor')
        self.publisher_ = self.create_publisher(Float32, 'temperature', 10)

    # Initialize BM180 sensor here

    def read_temperature(self):
        # Implement code to read temperature from BM180 sensor here
        temperature = 25.0 # Example temperature value

        msg = Float32()
        msg.data = temperature
        self.publisher_.publish(msg)

    def timer_callback(self):
        self.read_temperature()

def main(args=None):
    rclpy.init(args=args)
    temperature_sensor = TemperatureSensor()

    timer_period = 1.0 # seconds
    timer = temperature_sensor.create_timer(timer_period, temperature_sensor.timer_callback)

    rclpy.spin(temperature_sensor)

    temperature_sensor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()