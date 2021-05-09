//
// Created by david on 5/3/21.
//

#include "GeneSplicer.hpp"

pandemic::GeneSplicer::GeneSplicer(pandemic::Board board, City city) : Player(board, city) {
 this->charactersRole = "GeneSplicer";
    this->location = city;
    this->board = &board;
    initCards();
}

pandemic::Player pandemic::GeneSplicer::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::GeneSplicer::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::GeneSplicer::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::GeneSplicer::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::GeneSplicer::build() {
    return Player::build();
}

pandemic::Player pandemic::GeneSplicer::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::GeneSplicer::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::GeneSplicer::take_card(City city ) {
    return Player::take_card( city);
}
