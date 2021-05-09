//
// Created by david on 5/3/21.
//

#include "Virologist.hpp"

pandemic::Virologist::Virologist(pandemic::Board board, City city) : Player(board, city) {
    this->charactersRole = "Virologist";
    this->location = city;
    this->board = &board;
    initCards();
}

pandemic::Player pandemic::Virologist::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::Virologist::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::Virologist::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::Virologist::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::Virologist::build() {
    return Player::build();
}

pandemic::Player pandemic::Virologist::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::Virologist::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::Virologist::take_card(City city ) {
    return Player::take_card( city);
}
