//
// Created by david on 5/3/21.
//

#include "Researcher.hpp"

pandemic::Researcher::Researcher(pandemic::Board board, City city) : Player(board, city) {
    this->charactersRole = "Researcher";
    this->location = city;
    this->board = &board;
    initCards();
}

pandemic::Player pandemic::Researcher::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::Researcher::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::Researcher::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::Researcher::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::Researcher::build() {
    return Player::build();
}

pandemic::Player pandemic::Researcher::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::Researcher::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::Researcher::take_card(City city ) {
    return Player::take_card(city);
}
