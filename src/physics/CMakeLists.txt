project( RocketSimulator )

add_library( physics
    physics.cpp
)

target_link_libraries( application physics )