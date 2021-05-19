//
// Created by david on 5/3/21.
//

#include "GeneSplicer.hpp"

pandemic::GeneSplicer::GeneSplicer(pandemic::Board &board, City city) : Player(board, city) {
 this->charactersRole = "GeneSplicer";
    this->location = city;
    initCards();
}

pandemic::Player &pandemic::GeneSplicer::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player &pandemic::GeneSplicer::drive(City city) {
    return Player::drive(city);
}

pandemic::Player &pandemic::GeneSplicer::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player &pandemic::GeneSplicer::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player &pandemic::GeneSplicer::build() {
    return Player::build();
}

pandemic::Player& pandemic::GeneSplicer::discover_cure(pandemic::Color color) {
    if (this->board.isDiseaseHasBeenCured(color)){return *this;}

    int check = 0;
    //if there is a research station in our current location
    if (this->board.researchStation(this->location)) {

        //checks all the cards
        for (auto &item : this->cards) {
            //checks if the player own the current card
            if (item.second) {
                    check++;
                }
        }
       const int num =5;
        if (check >= num) {
            check = num;
            for (auto &item : this->cards) {
                if (item.second &&check > 0) {
                        item.second = false;
                        check--;
                }
            }
            //discover_cure
            this->board.isDiseaseHasBeenCured(color) = true;
            return *this;
        }
            throw std::runtime_error(
                    "when the GeneSplicer use discover_cure he didnt have enough cards");

    }
        throw std::runtime_error(
                "when the GeneSplicer use discover_cure,in his location there was not a research station");


}

pandemic::Player &pandemic::GeneSplicer::treat(City city) {
    return Player::treat(city);
}
