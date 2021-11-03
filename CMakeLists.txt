cmake_minimum_required(VERSION 3.0.0)
project(hashmap VERSION 0.1.0)

add_library(hashmap src/hashmap.c src/hashmap.h)

include_directories(src)
link_directories(build)
add_executable(test test/test.c)
target_link_libraries(test hashmap)
