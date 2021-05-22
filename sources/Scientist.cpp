//
// Created by david on 5/3/21.
//

#include "Scientist.hpp"

pandemic::Scientist::Scientist(pandemic::Board &board, City city, int num) : Player(board, city) {
    if (num >= 0) {
        this->cardsInOrderToDiscoverCure = num;
        this->charactersRole = "Scientist";
        this->location = city;
        initCards();
    } else {
        throw std::runtime_error(
                "the number of cards In Order To Discover Cure in Scientist constructor was negative pls change it and try again");
    }

}

pandemic::Player &pandemic::Scientist::discover_cure(pandemic::Color color) {
    if (this->board.isDiseaseHasBeenCured(color)){return *this;}

    int check = 0;
    //if there is a research station in our current location
    if (this->board.researchStation(this->location)) {

        //checks all the cards
        for (auto &item : this->cards) {
            //checks if the player own the current card
            if (item.second) {
                //checks if the card is in the correct color
                ////test
                if (this->board.cityToColor(item.first) == color) {
                    check++;
                }
//                if (true){ check++;}
            }
        }

        if (check >= this->cardsInOrderToDiscoverCure) {
            check = cardsInOrderToDiscoverCure;
            for (auto &item : this->cards) {
                if (item.second) {
                    if (this->board.cityToColor(item.first) == color && check > 0) {
                        item.second = false;
                        check--;
                    }
                }
            }
            //discover_cure
            this->board.isDiseaseHasBeenCured(color)= true;
            return *this;
        }
            throw std::runtime_error(
                    "when the Scientist use discover_cure he didnt have enough cards that in the wanted color");

    }
        throw std::runtime_error(
                "when the Scientist use discover_cure,in his location there was not a research station");

}






