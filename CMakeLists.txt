# Global Project Configuration
cmake_minimum_required(VERSION 3.26)
project(cpp-utils)

# Compiler options
set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-ggdb -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

# Set sources and includes
set(SOURCES
        src/main.cpp

        # Classes
        src/Image.cpp

        # Template Classes
        include/Array.hpp
        include/Array2D.hpp
        include/vec.hpp
        include/Vector2.hpp
        include/Vector3.hpp
        include/Vector4.hpp

        # Other Sources


        # Libraries
        lib/stb/stb_image.cpp
        lib/stb/stb_image_write.cpp
)

set(INCLUDES
        include

        # Libraries
        lib/stb
)

set(LIBRARIES

)

# Executable
add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDES})
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBRARIES})

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)