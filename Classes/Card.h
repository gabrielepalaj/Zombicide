//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_CARD_H
#define ZOMBICIDE_CARD_H


class Card {
public:
    Card();
    virtual ~Card();
    virtual bool use() = 0;
};


#endif //ZOMBICIDE_CARD_H
