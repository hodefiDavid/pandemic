//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"

/* one of the characters of the game
 *Virologist: Can perform a "treat" operation,
 * not only in the city in which it is located,
 * but in any city in the world - by throwing a card of that city.
 */
namespace pandemic {

    class Virologist : public Player {

    public:
        Virologist(Board board, City city);
    };
}


