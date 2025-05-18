cmake_minimum_required(VERSION 3.0)
project(dummy C)

set(CMAKE_C_STANDARD 99)

add_library(dummy STATIC src/main.c)

# Optional: install the library
install(TARGETS dummy DESTINATION lib)