//
// Created by gabriele on 12/06/22.
//

#ifndef SFMLEXAMPLE_GAME_H
#define SFMLEXAMPLE_GAME_H

/*
 * Class that act as game engine.
 */

class Game {
private:

public:
    //Costructors / destructors
    Game();
    ~Game();

    //Methods
    void update();
    void render();

};


#endif //SFMLEXAMPLE_GAME_H
