cmake_minimum_required(VERSION 3.10)
project(GTestCalculator)

set(CMAKE_CXX_STANDARD 17)

# Set GoogleTest path manually
set(GTEST_ROOT /opt/homebrew/opt/googletest)
find_package(GTest REQUIRED)

# Include GoogleTest headers
include_directories(${GTEST_ROOT}/include)

# Add calculator files
add_executable(calculator_test test_calculator.cpp calculator.cpp)

# Link GoogleTest and pthread
target_link_libraries(calculator_test ${GTEST_ROOT}/lib/libgtest.a ${GTEST_ROOT}/lib/libgtest_main.a pthread)
