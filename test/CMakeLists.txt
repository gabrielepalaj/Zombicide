cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp SurvivorTests.cpp)
add_executable(runCharacterTests ${TEST_SOURCE_FILES})
target_link_libraries(runCharacterTests gtest gtest_main core)

# Detect and add SFML - to read FindSFML.cmake file
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED network audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(runCharacterTests ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()