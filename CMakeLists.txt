cmake_minimum_required(VERSION 3.28)
project(computer_vision_cpp VERSION 1.0.0)

include(CTest)
enable_testing()

add_executable(computer_vision_cpp src/main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(computer_vision_cpp ${OpenCV_LIBS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
