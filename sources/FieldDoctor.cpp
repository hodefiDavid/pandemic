//
// Created by david on 5/3/21.
//

#include "FieldDoctor.hpp"

pandemic::FieldDoctor::FieldDoctor(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "FieldDoctor";
    this->location = city;
    initCards();
}

pandemic::Player pandemic::FieldDoctor::treat(City city) {

    if (this->board[city] > 0) {
        if (location == city || this->board.areNeighbor(location, city)) {
            //if Disease Has Been Cured we zero the disease cube in the given city
            if (this->board.isDiseaseHasBeenCured(this->board.cityToColor(city))){
                this->board[city]=0;}
            else{this->board[city]--;}

            return *this;
        } else {
            throw std::runtime_error("FieldDoctor tried to treat city that is not near him \n"
                                     "location != city && location are not Neighbor of the given city");
        }
    } else {
        throw std::runtime_error("you tried to treat city with 0 disease cube");
    }
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



//pandemic::Player pandemic::FieldDoctor::take_card( City city) {
//    return Player::take_card( city);
//}
