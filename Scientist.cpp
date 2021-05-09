//
// Created by david on 5/3/21.
//

#include "Scientist.hpp"


pandemic::Player pandemic::Scientist::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::Scientist::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::Scientist::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::Scientist::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::Scientist::build() {
    return Player::build();
}

pandemic::Player pandemic::Scientist::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::Scientist::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::Scientist::take_card(City city) {
    return Player::take_card(city);
}

pandemic::Scientist::Scientist(pandemic::Board board1, City city1) : Player(board1, city1) {
    this->charactersRole = "Scientist";
    this->location = city;
    this->board = &board;
//     INT 11111
    initCards();
}

pandemic::Scientist::Scientist(pandemic::Board board, City city, int num) {
    Scientist(board , city );
}





