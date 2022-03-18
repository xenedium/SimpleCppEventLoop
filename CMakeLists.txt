cmake_minimum_required(VERSION 3.21)
project(SimpleEventLoop)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleEventLoop main.cpp KeyListener.cpp KeyListener.h)
