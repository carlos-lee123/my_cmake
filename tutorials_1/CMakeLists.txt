cmake_minimum_required(VERSION 3.10)
# set the project name
project(Tutorial VERSION 1.0)

# add add_subdirectory
add_subdirectory(MathFunctions)

add_executable(Tutorial tutorial.cpp)
target_link_libraries(Tutorial PUBLIC MathFunctions)

# add include dir
target_include_directories(Tutorial PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/include"
"${PROJECT_SOURCE_DIR}/MathFunctions"
)
option(USE_MYMATH "use another math function" ON)
configure_file(TutorialConfig.h.in ${PROJECT_SOURCE_DIR}/include/TutorialConfig.h)

