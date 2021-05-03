//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"
/* one of the characters of the game
 * Dispatcher: When he is at a research station,
 * he can perform a "direct flight" operation to
 * any city he wants, without throwing a city card.
 */
namespace pandemic {

    class Dispatcher : public Player {

    public:
        Dispatcher(Board board, City city);
    };
}


