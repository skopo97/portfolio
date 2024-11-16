# Require a specific minimum CMake version
cmake_minimum_required(VERSION 3.25)

# Define the project name and version
project(MyProject VERSION 1.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add project-wide compiler warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Werror -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion)
elseif(MSVC)
    add_compile_options(/W4 /WX)
endif()

# Add this near the top of your CMakeLists.txt
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Add the executable target
add_executable(Question1 main.cpp)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")