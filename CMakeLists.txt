cmake_minimum_required(VERSION 3.10)

# Nazwa projektu
project(SnakeGame)

# Dodanie plików źródłowych
set(SOURCES
    main.cpp
    Board.cpp
    Food.cpp
    InputOutput.cpp
    Logic.cpp
    Snake.cpp
)

set(HEADERS
    Board.h
    Food.h
    InputOutput.h
    Logic.h
    Snake.h
)

# Dodanie plików do kompilacji
add_executable(MyProject ${SOURCES} ${HEADERS})

# Ustawienie standardu C++
set_target_properties(MyProject PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
)
