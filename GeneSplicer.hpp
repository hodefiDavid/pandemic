//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"

/* one of the characters of the game
 * GeneSplicer: Can perform a "discover_cure"
 * operation with the help of 5 cards - not necessarily
 * from the color of the disease.
 */
namespace pandemic {
    class GeneSplicer : public Player {

    public:
        GeneSplicer(Board board, City city);
    };
}


