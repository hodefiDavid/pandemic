//
// Created by david on 5/3/21.
//

#include "FieldDoctor.hpp"

pandemic::FieldDoctor::FieldDoctor(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "FieldDoctor";
    this->location = city;
    initCards();
}

pandemic::Player& pandemic::FieldDoctor::treat(City city) {

    if (this->board[city] > 0) {
        if (location == city || this->board.areNeighbor(location, city)) {
            //if Disease Has Been Cured we zero the disease cube in the given city
            if (this->board.isDiseaseHasBeenCured(this->board.cityToColor(city))){
                this->board[city]=0;}

            else{this->board[city]--;}

            return *this;
        }
            throw std::runtime_error("FieldDoctor tried to treat city that is not near him \n"
                                     "location != city && location are not Neighbor of the given city");

    }
        throw std::runtime_error("you tried to treat city with 0 disease cube");

}


