//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"

/* one of the characters of the game
 * Researcher: Can perform a "discover_cure"
 * operation in any city - does not have to be at a research station.
 */
namespace pandemic {

    class Researcher : public Player {

    public:
        Researcher(Board board, City city);
    };
}


