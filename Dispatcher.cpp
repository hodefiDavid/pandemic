//
// Created by david on 5/3/21.
//

#include "Dispatcher.hpp"

pandemic::Dispatcher::Dispatcher(pandemic::Board board, City city) : Player(board, city) {

    this->charactersRole = "Dispatcher";
    this->location = city;
    this->board = &board;
    initCards();
}

pandemic::Player pandemic::Dispatcher::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::Dispatcher::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::Dispatcher::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::Dispatcher::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::Dispatcher::build() {
    return Player::build();
}

pandemic::Player pandemic::Dispatcher::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::Dispatcher::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::Dispatcher::take_card( City city) {
    return Player::take_card(city);
}
