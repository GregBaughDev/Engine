cmake_minimum_required(VERSION 3.28)
project(Engine LANGUAGES CXX)

set(SOURCES src/Application.cpp src/Application.h src/EntryPoint.h Engine.h)
add_library(Engine SHARED ${SOURCES})

target_include_directories(Engine PUBLIC src)

set_target_properties(Engine PROPERTIES 
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    )