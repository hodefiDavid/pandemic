cmake_minimum_required(VERSION 3.17)
project(pandemic)

set(CMAKE_CXX_STANDARD 20)
#set(SourceList sources/Board.hpp sources/Board.cpp sources/City.hpp sources/Color.hpp sources/Player.hpp sources/Player.cpp
#        sources/Dispatcher.cpp sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/FieldDoctor.hpp
#        sources/GeneSplicer.cpp sources/GeneSplicer.hpp sources/Medic.cpp sources/Medic.hpp sources/OperationsExpert.cpp
#        sources/OperationsExpert.hpp sources/Researcher.cpp sources/Researcher.hpp sources/Scientist.cpp sources/Scientist.hpp
#        sources/Virologist.cpp sources/Virologist.hpp)

file(GLOB_RECURSE SourceList ./sources/*.cpp ./sources/*.hpp)

add_executable(main main.cpp ${SourceList})
add_executable(myTest Test.cpp ${SourceList})
add_executable(demo1 Demo1.cpp ${SourceList})
add_executable(demo2 Demo2.cpp ${SourceList})
add_executable(pandemic main.cpp)
add_executable(TT StudentTest1.cpp TestRunner.cpp ${SourceList})

include_directories(./sources)