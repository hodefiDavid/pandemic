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
        Virologist(Board &board, City city);

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


