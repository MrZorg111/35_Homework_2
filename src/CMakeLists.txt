cmake_minimum_required(VERSION 3.21)

add_executable("35_Homework_2" main.cpp ${MY_INCLUDE_DIR}/function.h)
target_include_directories("35_Homework_2" PUBLIC ${MY_INCLUDE_DIR})
