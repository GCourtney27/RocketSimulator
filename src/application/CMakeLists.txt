project( RocketSimulator )

add_executable( application )

# set_property( TARGET Application PROPERTY CXX_STANDARD 17 )

target_sources( application 
    PRIVATE
        main.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include/
        FILES
            include/app.h
)