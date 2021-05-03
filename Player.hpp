//
// Created by david on 5/3/21.
//

#pragma once

#include <string>
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{
    class Board;

    class Player{
    private:
        std::string charactersRole;
    public:
        //constructor
        Player(Board board, City city);
        /*  Direct flight - fly_direct - Transfer from the current city
         *  to any city of one of the card in his hand.
         *  To do this, throw the appropriate card to the city you are flying to.
         */
        virtual Player fly_direct(City city);
        /* Moving from the current city to a nearby city
         * (according to the context map).
         */
        virtual Player drive(City city);
        /*Franchise flight - fly_charter - transfer from the current city to any city.
         * To do this, throw the appropriate card to the city you are in.
         */
        virtual Player fly_charter(City city);
        /*Shuttle flight - fly_shuttle
         * If there is a research station in the current city,
         * you can fly to any other city that has a research station.
         */
        virtual Player fly_shuttle(City city);
        /*Build - build a research station in the city
         * that you are located in.
         * To do this, throw the appropriate card to the city you are in.
         * note:
         * Each city can have at most one research station.
         * If there is already a research station in the current city,
         * and a "build" operation is performed again,
         * we do not throw an exception, and the card remains in the player's hands.
         */
        virtual Player build();
        /*Drug discovery - discover_cure - Drug discovery for a disease of a certain color.
         * To do this, you must be in a city that has a research station,
         * and throw 5 colored cards of the disease.
         * The color of the city they are in does not matter.
         * Each disease has one cure.
         * If a cure for the disease has already been discovered,
         * and a "cure discovery" for the same disease is performed again,
         * we do not throw an exception, and the cards remain in the player's hands.
         */
        virtual Player discover_cure(Color color);
        /*Treat - Disease - lowering one disease cube from the city you are in
         * (reducing the level of the disease by 1).
         * If a cure for the disease has already been discovered in the color of the city,
         * then the action of "curing disease" removes all the disease cubes from the city
         * that are in it (reducing the level of disease to 0).
         * If there is no infection at all in the city (the disease level is 0),
         * then the action will throw an exception.
         */
        virtual Player treat(City city);
        /*role - a function that returns the role of the player
         */
        void role();
        /*
         * Taking some city card.
         * This simulates the process by which the player receives cards
         * from the deck at the beginning or during the game.
         */
        virtual Player take_card(City city);

    };



}
