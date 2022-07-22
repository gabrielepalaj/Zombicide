cmake_minimum_required(VERSION 3.12)
project(Zombicide)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME Zombicide)

add_executable(${EXECUTABLE_NAME} main.cpp GUI/Game.cpp GUI/Game.h GUI/Menu.cpp Classes/Character.cpp Classes/Character.h Classes/Zombie.cpp Classes/Zombie.h Classes/Survivor.cpp Classes/Survivor.h Classes/Deck.cpp Classes/Deck.h Classes/Inventory.cpp Classes/Inventory.h Classes/Card.cpp Classes/Card.h Classes/Weapon.cpp Classes/Weapon.h Classes/SpawnZombie.cpp Classes/SpawnZombie.h Classes/Map.cpp Classes/Map.h)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#unit test
add_subdirectory(test)

set(SOURCE_FILES Classes/Character.cpp Classes/Character.h Classes/Zombie.cpp Classes/Zombie.h Classes/Survivor.cpp Classes/Survivor.h Classes/Deck.cpp Classes/Deck.h Classes/Inventory.cpp Classes/Inventory.h Classes/Card.cpp Classes/Card.h Classes/Weapon.cpp Classes/Weapon.h Classes/SpawnZombie.cpp Classes/SpawnZombie.h Classes/Map.cpp Classes/Map.h)
add_executable(ZombicideExe main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Zombicide core)


# Detect and add SFML - to read FindSFML.cmake file
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED network audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()