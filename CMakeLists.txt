project(SoundexExample)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -pthread")
enable_testing()

set(sources
   main.cpp
   StringUtil.cpp
   CharUtil.cpp)
set(testSources
   SoundexTest.cpp
   StringUtilTest.cpp
   CharUtilTest.cpp)
 add_executable(SoundexTest ${testSources} ${sources})
target_link_libraries(SoundexTest pthread)
target_link_libraries(SoundexTest gmock)
target_link_libraries(SoundexTest gtest)
add_dependencies(SoundexTest gmock)
add_test(SoundexTest SoundexTest)
