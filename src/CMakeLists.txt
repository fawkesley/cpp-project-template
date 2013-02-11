cmake_minimum_required(VERSION 2.6)
project(MyApp)

set(CMAKE_BUILD_TYPE 
    RelWithDebInfo 
    CACHE STRING 
    "Whether to include debug symbols, one of Debug|Release|RelWithDebInfo" 
    FORCE)

set_property(CACHE 
    CMAKE_BUILD_TYPE 
    PROPERTY STRINGS 
    "Debug" "Release" "RelWithDebInfo")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})

set(CMAKE_CXX_FLAGS "-Wall") # applies to all build types
set(CMAKE_CXX_FLAGS_DEBUG "")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2")

add_library(MyAppLib
    MyApp.cpp
    # Add another other cpp files here
    )


add_executable(MyApp # Create a very basic executable which simply loads the lib
    main.cpp)

target_link_libraries(MyAppLib
    log4cxx)

target_link_libraries(MyApp MyAppLib)

