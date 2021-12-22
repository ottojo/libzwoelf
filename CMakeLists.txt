cmake_minimum_required(VERSION 3.22)
project(libzwoelf C)

set(CMAKE_C_STANDARD 17)

add_executable(someCompletelyNormalCProgram someCompletelyNormalCProgram.c)

add_library(zwoelf SHARED libzwoelf.c)
target_link_options(zwoelf PRIVATE "-Wl,-init,initZwoelf")
