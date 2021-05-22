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
        Researcher(Board &board, City city);

        /*Drug discovery - discover_cure - Drug discovery for a disease of a certain color.
         * To do this, you must be in a city that has a research station,
         * and throw 5 colored cards of the disease.
         * The color of the city they are in does not matter.
         * Each disease has one cure.
         * If a cure for the disease has already been discovered,
         * and a "cure discovery" for the same disease is performed again,
         * we do not throw an exception, and the cards remain in the player's hands.
         */
        Player &discover_cure(Color color) override;

    };
}


