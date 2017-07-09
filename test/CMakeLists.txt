set(SRC_PATH "../src")

include_directories(${SRC_PATH})

set(TEST_SRC
    "main.cpp"
    "test-hello.cpp"
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable("${PROJECT_NAME}-test" ${TEST_SRC} $<TARGET_OBJECTS:OBJ>)


enable_testing()
add_test(NAME "test-hello" COMMAND "${PROJECT_NAME}-test")

