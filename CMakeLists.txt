cmake_minimum_required(VERSION 3.17)
project(pandemic)

set(CMAKE_CXX_STANDARD 20)
set(SourceList Board.hpp Board.cpp City.hpp Color.hpp Player.hpp
        Dispatcher.cpp Dispatcher.cpp FieldDoctor.cpp FieldDoctor.hpp
        GeneSplicer.cpp GeneSplicer.hpp Medic.cpp Medic.hpp OperationsExpert.cpp
        OperationsExpert.hpp Researcher.cpp Researcher.hpp Scientist.cpp Scientist.hpp
        Virologist.cpp Virologist.hpp)

add_executable(main main.cpp ${SourceList})
add_executable(myTest Test.cpp ${SourceList})
add_executable(demo1 Demo1.cpp ${SourceList})
add_executable(pandemic main.cpp)