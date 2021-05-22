//
// Created by david on 5/3/21.
//

#include "Dispatcher.hpp"

pandemic::Dispatcher::Dispatcher(pandemic::Board &board, City city) : Player(board, city){

    this->charactersRole = "Dispatcher";
    this->location = city;
    initCards();
}


pandemic::Player& pandemic::Dispatcher::fly_direct(City city) {
    if (this->board.researchStation(this->location)){
        //if there is researchStation in the Dispatcher's location he dont need to throw a cards
        if (this->location == city){throw std::runtime_error("Dispatcher try to fly_direct to the city he was in");}
        this->location = city;
        return *this;
    }
    //if there is not research station in the city that the player stay use the Player fly_direct function

        return Player::fly_direct(city);

}

