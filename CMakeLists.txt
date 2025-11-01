cmake_minimum_required(VERSION 3.10)

# TODO: this should be set by the user
set(CMAKE_EXPORT_COMPILE_COMMANDS Y)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED Y)

project(dgbc)

set(DBGC_INCLUDES
    include
)

set(DBGC_SRC
    src/dbgc.c
)

add_library(dbgc ${DBGC_SRC})
target_include_directories(dbgc PUBLIC ${DBGC_INCLUDES} )

# tests
add_subdirectory(test)

