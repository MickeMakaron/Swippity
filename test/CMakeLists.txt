include_directories(${SRC_PATH})

set(TEST_SRC
    "main.cpp"
    "test-hello.cpp"
)

set(TEST_EXE "${PROJECT_NAME}-test")
add_executable(${TEST_EXE} ${TEST_SRC} $<TARGET_OBJECTS:OBJ>)


enable_testing()
add_test(NAME "test-hello" COMMAND sh -c "$<TARGET_FILE:${TEST_EXE}> -r junit > test-out.xml")

