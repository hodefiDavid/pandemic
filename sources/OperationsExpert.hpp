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
        OperationsExpert(Board &board, City city);

        /*Build - build a research station in the city
         * that you are located in.
         * To do this, throw the appropriate card to the city you are in.
         * note:
         * Each city can have at most one research station.
         * If there is already a research station in the current city,
         * and a "build" operation is performed again,
         * we do not throw an exception, and the card remains in the player's hands.
         */
        Player &build() override;


    };
}


