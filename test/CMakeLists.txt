set(SRC_PATH "../src")

include_directories(${SRC_PATH})

set(TEST_SRC
    "main.cpp"
    "test-hello.cpp"
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(TEST_EXE "${PROJECT_NAME}-test")
add_executable(${TEST_EXE} ${TEST_SRC} $<TARGET_OBJECTS:OBJ>)


enable_testing()
add_test(NAME "test-hello" COMMAND sh -c "$<TARGET_FILE:${TEST_EXE}> -r junit > test-out.xml")

