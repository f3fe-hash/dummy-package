cmake_minimum_required(VERSION 3.0)
project(dummy C)

set(CMAKE_C_STANDARD 99)

# Build executable from main.c
add_executable(dummy src/main.c)
