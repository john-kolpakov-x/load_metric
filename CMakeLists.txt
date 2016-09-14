cmake_minimum_required(VERSION 3.5)
project(load_metric)

#find_package(Curses REQUIRED)
#find_package(Threads REQUIRED)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(load_metric load_metric.c utils.c utils.h)

#target_link_libraries(load_metric ${CURSES_LIBRARIES})
#target_link_libraries(run_load_memory Threads::Threads)
