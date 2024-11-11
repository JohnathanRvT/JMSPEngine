# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(JMSPEditor)

# Set the C++ standard to the latest available (currently C++20)
set(CMAKE_CXX_STANDARD 20)

# Get list of all source and header files in the directory
file(GLOB_RECURSE SOURCES source/*.cpp)
file(GLOB_RECURSE HEADERS include/*.h)

# Include directories for JMSPEngine
include_directories(PUBLIC include/ ../JMSPEngine/include)

# Create the executable
add_executable(JMSPEditor ${SOURCES} ${HEADERS})

# Add any dependencies or libraries needed to link
target_link_libraries(JMSPEditor JMSPEngine)

# Check if building for Windows
if (${CMAKE_SYSTEM_NAME} MATCHES Windows)
  # Add JMSP_PLATFORM_WINDOWS preprocessor definition
  add_definitions(-DJMSP_PLATFORM_WINDOWS)
# Check if building for Android
elseif (${CMAKE_SYSTEM_NAME} MATCHES Android)
  # Add JMSP_PLATFORM_ANDROID preprocessor definition
  add_definitions(-DJMSP_PLATFORM_ANDROID)
# Check if building for macOS
elseif (${CMAKE_SYSTEM_NAME} MATCHES Darwin)
  # Add JMSP_PLATFORM_MACOS preprocessor definition
  add_definitions(-DJMSP_PLATFORM_MACOS)
# Check if building for Linux
elseif (${CMAKE_SYSTEM_NAME} MATCHES UNIX)
  # Add JMSP_PLATFORM_MACOS preprocessor definition
  add_definitions(-DJMSP_PLATFORM_UNIX)
endif()