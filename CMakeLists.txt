cmake_minimum_required(VERSION 3.5)
project(ros2_arduino_bridge)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

install(
  PROGRAMS
    src/arduino_bridge.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
