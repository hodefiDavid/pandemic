//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"

/* one of the characters of the game
 * OperationsExpert: Can perform a "build" operation
 * in any city he is in, without throwing a suitable city card.
 */
namespace pandemic {

    class OperationsExpert : public Player {

    public:
        OperationsExpert(Board board, City city);
    };
}


