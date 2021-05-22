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
        Medic(Board &board, City city);

        /*Treat - Disease - lowering one disease cube from the city you are in
         * (reducing the level of the disease by 1).
         * If a cure for the disease has already been discovered in the color of the city,
         * then the action of "curing disease" removes all the disease cubes from the city
         * that are in it (reducing the level of disease to 0).
         * If there is no infection at all in the city (the disease level is 0),
         * then the action will throw an exception.
         */
        Player &treat(City city) override;

    };
}


