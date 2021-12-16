cmake_minimum_required(VERSION 3.15)

project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_STANDARD 20)

add_executable(Tutorial tutorial.cxx)
configure_file(TutorialConfig.h.in TutorialConfig.h)

target_include_directories(Tutorial PUBLIC
                        "${PROJECT_BINARY_DIR}"
                        )