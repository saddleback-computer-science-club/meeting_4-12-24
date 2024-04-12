cmake_minimum_required(VERSION 3.14)

project(
    meeting_4-13-24
    VERSION 0.0.1
    LANGUAGES CXX
)

add_executable(counseling-simple
               source/application.h
               source/parser.cpp
               source/main.cpp)

target_compile_features(counseling-simple PRIVATE cxx_std_17)
