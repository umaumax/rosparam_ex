cmake_minimum_required(VERSION 2.8.3)
project(rosparam_ex)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
   CATKIN_DEPENDS roscpp
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(rosparam_ex src/rosparam_ex.cpp)
target_link_libraries(rosparam_ex ${catkin_LIBRARIES})
