#include "Game.h"
#include <iostream>



int main(int argc, char* argv[]) {

    //Init game engine
    Game game;


    while (game.isRunning()) {


        //update
        game.update();

        //render
        game.render();

    }
}