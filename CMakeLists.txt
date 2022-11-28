cmake_minimum_required(VERSION 3.14)
project(siemens)

set(CMAKE_C_COMPILER_NAMES clang gcc icc cc)
set(CMAKE_CXX_COMPILER_NAMES clang++ g++ icpc c++ cxx)

set(CMAKE_DEBUG_POSTFIX d)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(FOLDER_OUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/siemens")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${FOLDER_OUT_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${FOLDER_OUT_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${FOLDER_OUT_DIR}/bin)

# Google Test Suit
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
## For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()


# Adding functions
add_library(Helpers src/helpers.cpp)

# Ex3
add_executable(ex3 src/ex3.cpp)
target_link_libraries(ex3 Helpers)

# Ex4
add_executable(ex4 src/ex4.cpp)
target_link_libraries(ex4 Helpers)

# Ex10
add_executable(ex10 src/ex10.cpp)
target_link_libraries(ex10 Helpers)

# Ex11
add_executable(ex11 src/ex11.cpp)
target_link_libraries(ex11 Helpers)

# Tests
add_executable(unittest tests/unittest.cpp)
target_link_libraries(unittest GTest::gtest_main)
target_link_libraries(unittest Helpers)
include(GoogleTest)
gtest_discover_tests(unittest)



set(README_PATH "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set(LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(HEADER_PATH "${CMAKE_CURRENT_SOURCE_DIR}/src/Helpers.hpp")

file(COPY ${README_PATH} ${LICENSE} DESTINATION ${FOLDER_OUT_DIR})
file(COPY ${HEADER_PATH}  DESTINATION "${FOLDER_OUT_DIR}/include")