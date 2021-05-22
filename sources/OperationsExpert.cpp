//
// Created by david on 5/3/21.
//

#include "OperationsExpert.hpp"

pandemic::OperationsExpert::OperationsExpert(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "OperationsExpert";
    this->location = city;
    initCards();
}
pandemic::Player &pandemic::OperationsExpert::build() {
    this->board.researchStation(location) = true;
    return *this;
}


