//
// Created by david on 5/3/21.
//

#include "Researcher.hpp"

pandemic::Researcher::Researcher(pandemic::Board &board, City city) : Player(board, city) {
    this->charactersRole = "Researcher";
    this->location = city;
    initCards();
}

pandemic::Player &pandemic::Researcher::discover_cure(pandemic::Color color) {
    //there is extantion in the player when the Researcher use discover_cure function&
    return Player::discover_cure(color);
    {
//    if (this->board.isDiseaseHasBeenCured(color)){return *this;}
//
//    int check = 0;
//
//        //checks all the cards
//        for (auto item : this->cards) {
//            //checks if the player own the current card
//            if (item.second) {
//                //checks if the card is in the correct color
//                if (this->board.cityToColor(item.first) == color) {
//                    check++;
//                }
//            }
//        }
//        int  num =5;
//        if (check >= num) {
//            check = num;
//            for (auto item : this->cards) {
//                if (item.second) {
//                    if (this->board.cityToColor(item.first) == color && check > 0) {
//                        item.second = false;
//                        check--;
//                    }
//                }
//            }
//            this->board.isDiseaseHasBeenCured(color) = true;
//            return *this;
//        } else {
//            throw std::runtime_error(
//                    "when the Researcher use discover_cure he didnt have enough cards that in the wanted color");
//        }
}
    }


pandemic::Player &pandemic::Researcher::fly_direct(City city) {
    return Player::fly_direct(city);
}

pandemic::Player &pandemic::Researcher::drive(City city) {
    return Player::drive(city);
}

pandemic::Player &pandemic::Researcher::fly_charter(City city) {
    return Player::fly_charter(city);
}

pandemic::Player &pandemic::Researcher::fly_shuttle(City city) {
    return Player::fly_shuttle(city);
}

pandemic::Player &pandemic::Researcher::build() {
    return Player::build();
}




pandemic::Player &pandemic::Researcher::treat(City city) {
    return Player::treat(city);
}

//pandemic::Player pandemic::Researcher::take_card(City city ) {
//    return Player::take_card(city);
//}
