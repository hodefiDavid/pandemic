//
// Created by david on 5/4/21.
//

#include "Player.hpp"

pandemic::Player::Player(Board board, City city) {
    initCards();
    charactersRole="";
}

pandemic::Player pandemic::Player::fly_direct(City city) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::drive(City city) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::fly_charter(City city) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::fly_shuttle(City city) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::build() {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::discover_cure(pandemic::Color color) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
}

pandemic::Player pandemic::Player::treat(City city) {
    return pandemic::Player(pandemic::Board(), City::Mumbai);
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

//pandemic::Player pandemic::Player::take_card(City city) {
//    return pandemic::Player(pandemic::Board(), City::Mumbai);
//}

