//
// Created by david on 5/3/21.
//

#include "Medic.hpp"

pandemic::Medic::Medic(pandemic::Board board, City city) : Player(board, city) {
this->charactersRole = "Medic";
    this->location = city;
    this->board = &board;
    initCards();
}

pandemic::Player pandemic::Medic::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::Medic::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::Medic::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::Medic::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::Medic::build() {
    return Player::build();
}

pandemic::Player pandemic::Medic::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::Medic::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::Medic::take_card(City city ) {
    return Player::take_card( city);
}
