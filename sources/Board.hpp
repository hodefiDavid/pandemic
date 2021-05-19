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
        //std::map<City, int> citiesToNum;
        //was unsinged int
        std::map<City, int> diseaseCube;
        std::map<City, Color> cityColor;
        std::map<Color,bool> isDiseaseCure;
        std::map<City,bool> gotResearchStations;
        std::map<City,std::map<City,bool>> allCities;
        std::map<City, std::string> citiesToString;


    public:
        Board();
        /*
         * this function return true if city 1 and city 2 are neighbor (only one road between them) according to thr game map
         */
        bool areNeighbor(City ct1,City ct2);
        /*
         * this function return string that represent the given city
         */
        std::string ctToString(City ct);
        /*
         * this function return the number of disease cube in a given city
         * you could also change it to a different number of cube
         */
        int &operator[](City city) {return diseaseCube[city];}
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
        friend std::ostream &operator<<(std::ostream &os, Board &board);

        /*
         * a function that return true if there is a research Station in the given city
         * you also can change if you just build\remove
         */
        bool& researchStation(City ct);
        /*
         * a function that return city Color to a given city
         */
        Color cityToColor(City ct);

        /*
        * a function that return true if the disease has been cured, checks the given color disease
        * you also can change it to true\false using this function
        */
        bool & isDiseaseHasBeenCured(Color color){return isDiseaseCure[color];};

        };
}


