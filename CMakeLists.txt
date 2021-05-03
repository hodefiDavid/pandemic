cmake_minimum_required(VERSION 3.17)
project(pandemic)

set(CMAKE_CXX_STANDARD 20)
set(SourceList Board.hpp Board.cpp City.hpp Color.hpp Characters.hpp)

add_executable(main main.cpp ${SourceList})
add_executable(demo1 Demo1.cpp ${SourceList})
add_executable(pandemic main.cpp)