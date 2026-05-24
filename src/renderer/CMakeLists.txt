project( RocketSimulator )

add_library( renderer )

target_sources( renderer 
    PRIVATE
        renderer.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include/
        FILES
            include/common.h
)

target_link_libraries( application renderer )