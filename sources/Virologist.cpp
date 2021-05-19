//
// Created by david on 5/3/21.
//

#include "Virologist.hpp"

pandemic::Virologist::Virologist(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "Virologist";
    this->location = city;
    initCards();
}

pandemic::Player &pandemic::Virologist::treat(City city) {
    //city with 0 disease cube
    if (this->board[city] <= 0){
        throw std::runtime_error("you tried to treat city with 0 disease cube");
    }
    // if city!=location that mean that the Virologist uses his special ability
    if (city!=location){
        //checks if there is the right card in their hand
        if (this->cards[city]){
            this->cards[city]= false;
            this->board[city]--;
            if (this->board.isDiseaseHasBeenCured(this->board.cityToColor(city))){
                this->board[city]=0;
            }
            return *this;}

            throw std::runtime_error("the Virologist try to treat a city that he dose not have its card ");

    }
    return Player::treat(city);
}

pandemic::Player &pandemic::Virologist::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player &pandemic::Virologist::drive(City city) {
    return Player::drive(city);
}

pandemic::Player &pandemic::Virologist::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player &pandemic::Virologist::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player &pandemic::Virologist::build() {
    return Player::build();
}

pandemic::Player &pandemic::Virologist::discover_cure(pandemic::Color color) {
    return Player::discover_cure(color);
}



//pandemic::Player pandemic::Virologist::take_card(City city ) {
//    return Player::take_card( city);
//}
