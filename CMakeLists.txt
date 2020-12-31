cmake_minimum_required(VERSION 3.17)
project(tpa2020_UniversityDegreeCourse)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(tpa2020_UniversityDegreeCourse main.cpp
        src/person.cpp
        src/student.cpp
        src/teacher.cpp
        src/course.cpp
        src/room.cpp
        src/lesson.cpp
        src/display.cpp)