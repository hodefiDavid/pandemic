//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"

/* one of the characters of the game
 *Paramedic - Medic: When he performs a "treat"
 * operation, he removes all the disease cubes from
 * the city he is in, and not just one.
 */
namespace pandemic {

    class Medic : public Player {

    public:
        Medic(Board board, City city);
    };
}


