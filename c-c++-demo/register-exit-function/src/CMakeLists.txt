message(STATUS "This is src dir:" ${CMAKE_CURRENT_SOURCE_DIR}) 

set(SRC_LIST main.c)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
#message(STATUS "Executable out path:" ${EXECUTABLE_OUTPUT_PATH})

set(CMAKE_BUILD_TYPE Debug CACHE STRING "set build type to debug") 

add_executable(register ${SRC_LIST})
