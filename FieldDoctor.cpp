//
// Created by david on 5/3/21.
//

#include "FieldDoctor.hpp"

pandemic::FieldDoctor::FieldDoctor(pandemic::Board board, City city) : Player(board, city) {

}

pandemic::Player pandemic::FieldDoctor::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player pandemic::FieldDoctor::drive(City city) {
    return Player::drive(city);
}

pandemic::Player pandemic::FieldDoctor::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player pandemic::FieldDoctor::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player pandemic::FieldDoctor::build() {
    return Player::build();
}

pandemic::Player pandemic::FieldDoctor::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}

pandemic::Player pandemic::FieldDoctor::treat(City city) {
    return Player::treat(city);
}

pandemic::Player pandemic::FieldDoctor::take_card( City city) {
    return Player::take_card( city);
}
