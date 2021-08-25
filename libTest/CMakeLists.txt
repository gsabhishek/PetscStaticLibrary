cmake_minimum_required(VERSION 3.10)
project(Test VERSION 1.0 DESCRIPTION "Sharp Interface Library for Solidfiication")
set(APP_NAME ${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_search_module(PETSC REQUIRED PETSc)
include_directories(${PETSC_INCLUDES})
set(PROJECT_LIBS ${PROJECT_LIBS} ${PETSC_LIBRARIES})
set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} ${PETSC_CFLAGS})

include_directories(${PROJECT_SOURCE_DIR}/src)
file(GLOB_RECURSE PROJECT_SRCS ${PROJECT_SOURCE_DIR}/include/*.cpp ${PROJECT_SOURCE_DIR}/include/*.h)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_library(${APP_NAME} STATIC ${PROJECT_SOURCE_DIR}/include/test.cpp)
target_link_libraries(${APP_NAME} ${PROJECT_LIBS})

message (STATUS "Variable : ${PETSC_CFLAGS}")
