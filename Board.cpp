//
// Created by david on 5/3/21.
//

#include "Board.hpp"
#include <sstream>
#include <string>

using namespace pandemic;
using namespace std;

/**
 * readCities function Cities from ifstream and put the data in the graph
 * every row in the file should be in that pattern :
 * 'city name' 'color of the disease' 'connected cities'
 * @param file represent the read file that the function read from
 */
void Board::readCities(ifstream &file) {
    buildCities(file);


}

void Board::buildCities(ifstream &file) {
    string str;
    int cityNum = 0;
    while (getline(file, str)) {
//temporary length in order to locate were we are in the string
        size_t len = 0;

//city_name and city_color represent city_color\city_name as shown above in Node class
        string city_name;
        string city_color;


//find the place ' ' appear
        len = str.find(' ');
//checks for error
        if (len == -1) { sendErrorReadCities(cityNum); }

        city_name = str.substr(0, len);
//delete all the chars until we ' ' (include ' ')
        str.erase(0, len + 1);


        len = str.find(' ');
//checks for error
        if (len == -1) { sendErrorReadCities(cityNum); }
        city_color = str.substr(0, len);
//delete all the unnecessary " "
        erase(city_name, ' ');
        erase(city_color, ' ');

        Color c = Color::Blue;
        if (city_color == "Red") {
            c = Color::Red;
        } else {
            if (city_color == "Blue") {
                c = Color::Blue;
            } else {
                if (city_color == "Black") {
                    c = Color::Black;
                } else {
                    if (city_color == "Yellow") {
                        c = Color::Yellow;
                    }
                }
            }
        }

//building The nodes
        graph.addCities(city_name, c, cityNum);
        cityNum++;
    }
}

void Board::add_edge_between_cities(ifstream &file) {
    string str;
    int cityNum = 0;
    while (getline(file, str)) {
        //temporary length in order to locate were we are in the string
        size_t len = 0;

        //city_name and city_color represent city_color\city_name as shown above in Node class
        string city_name;


        //find the place ' ' appear
        len = str.find(' ');
        //checks for error
        if (len == -1) { sendErrorReadCities(cityNum); }
        //delete all the chars until we ' ' (include ' ')
        str.erase(0, len + 1);
        //find the place ' ' appear
        len = str.find(' ');
        //checks for error
        if (len == -1) { sendErrorReadCities(cityNum); }
        //delete all the chars until we ' ' (include ' ')
        str.erase(0, len + 1);

        len = str.find(' ');
        //checks for error
        if (len == -1) { sendErrorReadCities(cityNum); }
        city_name = str.substr(0, len);
        //delete all the unnecessary " "
        erase(city_name, ' ');

//building The nodes
//        graph.addCities(city_name, c, cityNum);
        cityNum++;
    }
}

bool Board::is_clean() {
    return false;
}

/**
 * sendErrorReadCities function send an error if the function read units failed
 * @param row represent the row number which the error occur
 */
void sendErrorReadCities(int row) {
    string Row = to_string(row);
    string errorMsg = "the file doesn't mach the pattern:\n"
                      "\t""'city name' 'color of the disease' 'connected cities' \n"
                      "\t""the problem is in row :";
    throw invalid_argument(errorMsg + Row);
}
