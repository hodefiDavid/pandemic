//
// Created by david on 5/3/21.
//

#pragma once

#include "Color.hpp"
#include "Player.hpp"
#include "City.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>
#include <vector>

namespace pandemic {


    class Board {

    private:
        std::map<City, unsigned int> diseaseCube;
        std::map<City, Color> cityColor;
        std::map<Color,bool> isDiseaseCure;
        std::map<City,bool> gotResearchStations;
        std::map<City,std::map<City,bool>> allCities;
        std::map<City, int> citiesToNum;

    public:
        Board();

        unsigned int &operator[](City city) {
            return diseaseCube.at(city);
        }
        /*
         *Boolean method without parameters,
         * which returns "true" if and only if the whole board is clean,
         * that is,if there are no disease cubes.
         */
        bool is_clean();
        /*
         * A method without parameters,
         * which removes from the board all the cures that have been discovered so far
         * This method is intended for the purpose of writing tests;
         * It never throws an exception.
         */
        void remove_cures();
        /*
         * A method without parameters,
         * which removes from the board all the research stations that have been discovered so far
         * This method is intended for the purpose of writing tests;
         * It never throws an exception.
         */
        void remove_stations();

        //Output Operator - Displays the status of the board in any format of your choice. The board mode includes:
        //The level of disease in each of the cities;
        //The drugs discovered so far ;
        //Research stations built so far.
        friend std::ostream &operator<<(std::ostream &os, const Board &board);

/*
 * function that delete all the medicine that already has been discover
 * it do it for all the different disease (colors).
 */
        void remove_cure();
    };
}


