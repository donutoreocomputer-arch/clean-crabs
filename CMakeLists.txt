cmake_minimum_required(VERSION 4.00)
project(panda_tools C)
set(CMAKE_C_STANDARD 23)

file(GLOB SOURCES "dumbutils/*.c")
foreach(source ${SOURCES})
    get_filename_component(name ${source} NAME_WE)
    add_executable(${name} ${source})
endforeach()
