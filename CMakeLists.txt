cmake_minimum_required( VERSION 4.1.1 )
project( RocketSimulator VERSION 0.1.0 LANGUAGES C CXX )

# include(CTest)
# enable_testing()

add_subdirectory(src/application)
add_subdirectory(src/renderer)
add_subdirectory(src/physics)
