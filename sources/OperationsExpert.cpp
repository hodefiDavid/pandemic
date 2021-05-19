//
// Created by david on 5/3/21.
//

#include "OperationsExpert.hpp"

pandemic::OperationsExpert::OperationsExpert(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "OperationsExpert";
    this->location = city;
    initCards();
}
pandemic::Player pandemic::OperationsExpert::build() {
    this->board.researchStation(location) = true;
    return *this;
}

pandemic::Player pandemic::OperationsExpert::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::OperationsExpert::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::OperationsExpert::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::OperationsExpert::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}



pandemic::Player pandemic::OperationsExpert::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::OperationsExpert::treat(City city) {
    return Player::treat(city);
}

