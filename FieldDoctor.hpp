//
// Created by david on 5/3/21.
//

#pragma once
#include "Player.hpp"
/* one of the characters of the game
 * FieldDoctor:
 * Can perform a "treat" operation not only in the city he is in
 * but in any city near the city he is in
 * (according to the context map), without throwing a city card.
 */
namespace pandemic {

    class FieldDoctor : public Player {

    public:
        FieldDoctor(Board board, City city);
    };
}


