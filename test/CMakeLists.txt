set(SRC_PATH "../src")

include_directories(${SRC_PATH})

file(GLOB TEST_SRC "*.cpp")
file(GLOB SRC "${SRC_PATH}/*.cpp")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable("${PROJECT_NAME}-test" ${TEST_SRC} $<TARGET_OBJECTS:OBJ>)


enable_testing()
add_test(NAME "test-hello" COMMAND "${PROJECT_NAME}-test")

