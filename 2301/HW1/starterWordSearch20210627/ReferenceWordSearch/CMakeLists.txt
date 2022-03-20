cmake_minimum_required(VERSION 3.21)
project(ReferenceWordSearch C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(ReferenceWordSearch
        src/production.c
        src/production.h
        src/ReferenceWordSearch.c
        src/teamMembers.h
        src/tests.c
        src/tests.h)
