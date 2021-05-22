//
// Created by david on 5/3/21.
//

#include "Medic.hpp"

pandemic::Medic::Medic(pandemic::Board &board, City city) : Player(board, city) {
    //dont change charactersRole = "Medic" because its been used in the function Player::treat
    this->charactersRole = "Medic";
    this->location = city;
    initCards();
}

pandemic::Player &pandemic::Medic::treat(City city) {
    //the medic need to be in same city that he treat
    if (location==city){
        //if there is disease cube in the city
        if (this->board[city]>0){
            this->board[city]=0;
        }else{
            throw std::runtime_error("the medic try to treat city with 0 cube disease");;
        }
    } else{
        throw std::runtime_error("the Medic location =! to the city he want to treat");;
    }
    return *this;
}



