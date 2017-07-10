cmake_minimum_required(VERSION 3.3)


project(swippity)

set(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Werror -Wall -Wextra -pedantic-errors -std=c++14")


get_filename_component(SRC_PATH "src" ABSOLUTE)

set(SRC
    "${SRC_PATH}/hello.cpp"
)
set(MAIN_SRC "${SRC_PATH}/main.cpp")
#file(GLOB SRC "${SRC_PATH}/*.cpp")

add_library(OBJ OBJECT ${SRC})

add_executable(${PROJECT_NAME} ${MAIN_SRC} $<TARGET_OBJECTS:OBJ>)



enable_testing()
add_subdirectory(test)
