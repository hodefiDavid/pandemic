//
// Created by david on 5/4/21.
//

#include "Player.hpp"

pandemic::Player::Player(Board &board, City city) : board(board),location(city) {
//    initCards();
//    charactersRole = "";
}

pandemic::Player &pandemic::Player::drive(City city) {
    if (location == city) {
        throw std::runtime_error("player already in the correct city location == city ");
    }
    if (board.areNeighbor(location, city)) {
        this->location = city;
        if (this->role() == "Medic") {
            medicSpecial(this->location);
        }
    } else {
        std::string str = "Player::drive was unable to reach the city: " + board.ctToString(city) + " form the city: " +
                          board.ctToString(location) + "\n";
        throw std::runtime_error(str);
    }
    return *this;
}

pandemic::Player &pandemic::Player::fly_direct(City city) {
    if (location == city) {
        throw std::runtime_error("player already in the correct city location == city ");
    }

    if (this->cards[city]) {
        this->cards[city] = false;
        //change location
        location = city;

        if (this->role() == "Medic") {
            medicSpecial(this->location);
        }

        return *this;
    }
        std::string str = "Player::drive was unable to reach the city: " + board.ctToString(city) + " form the city: " +
                          board.ctToString(location) + "because he dont have the right card\n";
        throw std::runtime_error(str);

}

pandemic::Player &pandemic::Player::fly_charter(City city) {
    if (location == city) {
        throw std::runtime_error("player already in the correct city location == city ");
    }

    if (this->cards[location]) {
        this->cards[location] = false;
        //change location
        location = city;
        if (this->role() == "Medic") {
            medicSpecial(this->location);
        }
        return *this;
    }
        std::string str = "Player::drive was unable to reach the city: " + board.ctToString(city) + " form the city: " +
                          board.ctToString(location) + "because he dont have the right card\n";
        throw std::runtime_error(str);

}

pandemic::Player &pandemic::Player::fly_shuttle(City city) {
    if (this->location == city) { throw std::runtime_error("Player::fly_shuttle cannot fly from city to it self"); }
    //if there is a researchStation in the city that you currently in
    if (this->board.researchStation(this->location)) {
        //if there is a researchStation in the city that you want to go
        if (this->board.researchStation(city)) {
            //change location
            this->location = city;
            //if the medic arrive to city that got disease cube and we already discover a cure for this disease so the medic erase all the disease cube automatically
            if (this->role() == "Medic") {
                medicSpecial(this->location);
            }

            return *this;
        }
    }
    std::string str =
            "Player::fly_shuttle was unable to reach the city: " + board.ctToString(city) + " form the city: " +
            board.ctToString(location) + "because he dont have researchStation in one of the cities\n";
    throw std::runtime_error(str);

}

pandemic::Player &pandemic::Player::build() {
    //if there is a researchStation in the city that you currently in dont do anything
    if (this->board.researchStation(this->location)) {
        return *this;
    }
        //checks if the player have the card of the current city

        if (this->cards[this->location]) {
            //throw a way the card
            this->cards[this->location] = false;
            //build the researchStation
            this->board.researchStation(this->location) = true;

            return *this;
        }
            std::string str =
                    "Player::build was unable to build in the city: " + board.ctToString(location) +
                    "because he dont have the card city in his hand\n";
            throw std::runtime_error(str);



}

pandemic::Player &pandemic::Player::discover_cure(pandemic::Color color) {
    std::string strMsgError;
    //checks if the Disease Has Been Cured
    if (!this->board.isDiseaseHasBeenCured(color)) {
        //checks if the Player in city that have researchStation
        //or if the player is a Researcher so he dont need to be in researchStation in order to preform discover_cure
        if (this->board.researchStation(this->location) || this->role() == "Researcher") {
            int colorNum = 0;
            //go throw all the cards
            for (auto &item : this->cards) {
                //checks if the card in his hand
                if (item.second) {
                    //checks if the city has the same color
                    if (this->board.cityToColor(item.first) == color) {
                        colorNum++;
                    }
                }
            }
            const int num = 5;
            //if the player has at least 5 card
            if (colorNum >= num) {
                colorNum = num;
                //go throw all the cards
                for (auto &item : this->cards) {
                    //checks if the card in his hand and if the number of card that we used is not over 5
                    if (item.second && colorNum > 0) {
                        //checks if the city has the same color
                        if (this->board.cityToColor(item.first) == color) {
                            //throw his card
                            item.second = false;
                            colorNum--;
                        }
                    }
                }
                //discover_cure
                this->board.isDiseaseHasBeenCured(color) = true;
                return *this;
            }
                strMsgError =
                        "Player::discover_cure was unable to discover_cure in the city: " + board.ctToString(location) +
                        "because he dont have enough card in the right color in his hand\n";
                throw std::runtime_error(strMsgError);

        }
        strMsgError = "Player::discover_cure was unable to discover_cure in the city: " + board.ctToString(location) +
                      "because the city did not have a research Station \n";
        throw std::runtime_error(strMsgError);
    }
    return *this;
}

pandemic::Player & pandemic::Player::treat(City city) {

    if (this->board[city] > 0) {
        if (location == city) {
            //if Disease Has Been Cured we zero the disease cube in the given city
            if (this->board.isDiseaseHasBeenCured(this->board.cityToColor(city)) || this->role() == ("Medic")) {
                this->board[city] = 0;
            } else { this->board[city]--; }
            return *this;
        }

            throw std::runtime_error("Player tried to treat city that is not in it  \n");

    }
        throw std::runtime_error("you tried to treat city with 0 disease cube");

    return *this;
}

void pandemic::Player::initCards() {
    cards[City::Algiers] = false;
    cards[City::Atlanta] = false;
    cards[City::Baghdad] = false;
    cards[City::Bangkok] = false;
    cards[City::Beijing] = false;
    cards[City::Bogota] = false;
    cards[City::BuenosAires] = false;
    cards[City::Cairo] = false;
    cards[City::Chennai] = false;
    cards[City::Chicago] = false;
    cards[City::Delhi] = false;
    cards[City::Essen] = false;
    cards[City::HoChiMinhCity] = false;
    cards[City::HongKong] = false;
    cards[City::Istanbul] = false;
    cards[City::Jakarta] = false;
    cards[City::Johannesburg] = false;
    cards[City::Karachi] = false;
    cards[City::Khartoum] = false;
    cards[City::Kinshasa] = false;
    cards[City::Kolkata] = false;
    cards[City::Lagos] = false;
    cards[City::Lima] = false;
    cards[City::London] = false;
    cards[City::LosAngeles] = false;
    cards[City::Madrid] = false;
    cards[City::Manila] = false;
    cards[City::MexicoCity] = false;
    cards[City::Miami] = false;
    cards[City::Milan] = false;
    cards[City::Montreal] = false;
    cards[City::Moscow] = false;
    cards[City::Mumbai] = false;
    cards[City::NewYork] = false;
    cards[City::Osaka] = false;
    cards[City::Paris] = false;
    cards[City::Riyadh] = false;
    cards[City::SanFrancisco] = false;
    cards[City::Santiago] = false;
    cards[City::SaoPaulo] = false;
    cards[City::Seoul] = false;
    cards[City::Shanghai] = false;
    cards[City::StPetersburg] = false;
    cards[City::Sydney] = false;
    cards[City::Taipei] = false;
    cards[City::Tehran] = false;
    cards[City::Tokyo] = false;
    cards[City::Washington] = false;
}

void pandemic::Player::medicSpecial(City ct) {
    //get the color of the city
    Color color = this->board.cityToColor(ct);
    //if the Disease Has Been Cured zero the number of disease cube in that city
    if (this->board.isDiseaseHasBeenCured(color)) {
        this->board[ct] = 0;
    }
}

void pandemic::Player::remove_cards() {
for(auto &item:this->cards){
    item.second = false;}
}

//pandemic::Player pandemic::Player::take_card(City city) {
//    return pandemic::Player(pandemic::Board(), City::Mumbai);
//}

