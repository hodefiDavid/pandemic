//
// Created by david on 5/3/21.
//

#include "Board.hpp"
#include <sstream>
#include <string>

using namespace pandemic;
using namespace std;
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

        Color color = Color::Blue;
        if (city_color == "Red") {
            color = Color::Red;
        } else {
            if (city_color == "Blue") {
                color = Color::Blue;
            } else {
                if (city_color == "Black") {
                    color = Color::Black;
                } else {
                    if (city_color == "Yellow") {
                        color = Color::Yellow;
                    }
                }
            }
        }

        City temp = (City)cityNum;
//building The nodes
        graph.addCities(city_name, color, temp);
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

std::ostream &pandemic::operator<<(ostream &os, const Board &board) {
    return os;
}

void Board::remove_cure() {

}

void Board::sendErrorReadCities(int row) {

}

void Board::remove_cures() {

}

void Board::buildNodesReadCities(std::string city_name, Color city_color, int city_num) {

}

Board::Board() {
   //init cities to num map
    citiesToNum [City:: Algiers ] =  0 ;
    citiesToNum [City:: Atlanta ] =  1 ;
    citiesToNum [City:: Baghdad ] =  2 ;
    citiesToNum [City:: Bangkok ] =  3 ;
    citiesToNum [City:: Beijing ] =  4 ;
    citiesToNum [City:: Bogota ] =  5 ;
    citiesToNum [City:: BuenosAires ] =  6 ;
    citiesToNum [City:: Cairo ] =  7 ;
    citiesToNum [City:: Chennai ] =  8 ;
    citiesToNum [City:: Chicago ] =  9 ;
    citiesToNum [City:: Delhi ] =  10 ;
    citiesToNum [City:: Essen ] =  11 ;
    citiesToNum [City:: HoChiMinhCity ] =  12 ;
    citiesToNum [City:: HongKong ] =  13 ;
    citiesToNum [City:: Istanbul ] =  14 ;
    citiesToNum [City:: Jakarta ] =  15 ;
    citiesToNum [City:: Johannesburg ] =  16 ;
    citiesToNum [City:: Karachi ] =  17 ;
    citiesToNum [City:: Khartoum ] =  18 ;
    citiesToNum [City:: Kinshasa ] =  19 ;
    citiesToNum [City:: Kolkata ] =  20 ;
    citiesToNum [City:: Lagos ] =  21 ;
    citiesToNum [City:: Lima ] =  22 ;
    citiesToNum [City:: London ] =  23 ;
    citiesToNum [City:: LosAngeles ] =  24 ;
    citiesToNum [City:: Madrid ] =  25 ;
    citiesToNum [City:: Manila ] =  26 ;
    citiesToNum [City:: MexicoCity ] =  27 ;
    citiesToNum [City:: Miami ] =  28 ;
    citiesToNum [City:: Milan ] =  29 ;
    citiesToNum [City:: Montreal ] =  30 ;
    citiesToNum [City:: Moscow ] =  31 ;
    citiesToNum [City:: Mumbai ] =  32 ;
    citiesToNum [City:: NewYork ] =  33 ;
    citiesToNum [City:: Osaka ] =  34 ;
    citiesToNum [City:: Paris ] =  35 ;
    citiesToNum [City:: Riyadh ] =  36 ;
    citiesToNum [City:: SanFrancisco ] =  37 ;
    citiesToNum [City:: Santiago ] =  38 ;
    citiesToNum [City:: SaoPaulo ] =  39 ;
    citiesToNum [City:: Seoul ] =  40 ;
    citiesToNum [City:: Shanghai ] =  41 ;
    citiesToNum [City:: StPetersburg ] =  42 ;
    citiesToNum [City:: Sydney ] =  43 ;
    citiesToNum [City:: Taipei ] =  44 ;
    citiesToNum [City:: Tehran ] =  45 ;
    citiesToNum [City:: Tokyo ] =  46 ;
    citiesToNum [City:: Washington ] =  47 ;

    //init cities to num map
    diseaseCube [City:: Algiers ] =  0 ;
    diseaseCube [City:: Atlanta ] =  0 ;
    diseaseCube [City:: Baghdad ] =  0 ;
    diseaseCube [City:: Bangkok ] =  0 ;
    diseaseCube [City:: Beijing ] =  0 ;
    diseaseCube [City:: Bogota ] =  0 ;
    diseaseCube [City:: BuenosAires ] =  0 ;
    diseaseCube [City:: Cairo ] =  0 ;
    diseaseCube [City:: Chennai ] =  0 ;
    diseaseCube [City:: Chicago ] =  0 ;
    diseaseCube [City:: Delhi ] =  0 ;
    diseaseCube [City:: Essen ] =  0 ;
    diseaseCube [City:: HoChiMinhCity ] =  0 ;
    diseaseCube [City:: HongKong ] =  0 ;
    diseaseCube [City:: Istanbul ] =  0 ;
    diseaseCube [City:: Jakarta ] =  0 ;
    diseaseCube [City:: Johannesburg ] =  0 ;
    diseaseCube [City:: Karachi ] =  0 ;
    diseaseCube [City:: Khartoum ] =  0 ;
    diseaseCube [City:: Kinshasa ] =  0 ;
    diseaseCube [City:: Kolkata ] =  0 ;
    diseaseCube [City:: Lagos ] =  0 ;
    diseaseCube [City:: Lima ] =  0 ;
    diseaseCube [City:: London ] =  0 ;
    diseaseCube [City:: LosAngeles ] =  0 ;
    diseaseCube [City:: Madrid ] =  0 ;
    diseaseCube [City:: Manila ] =  0 ;
    diseaseCube [City:: MexicoCity ] =  0 ;
    diseaseCube [City:: Miami ] =  0 ;
    diseaseCube [City:: Milan ] =  0 ;
    diseaseCube [City:: Montreal ] =  0 ;
    diseaseCube [City:: Moscow ] =  0 ;
    diseaseCube [City:: Mumbai ] =  0 ;
    diseaseCube [City:: NewYork ] =  0 ;
    diseaseCube [City:: Osaka ] =  0 ;
    diseaseCube [City:: Paris ] =  0 ;
    diseaseCube [City:: Riyadh ] =  0 ;
    diseaseCube [City:: SanFrancisco ] =  0 ;
    diseaseCube [City:: Santiago ] =  0 ;
    diseaseCube [City:: SaoPaulo ] =  0 ;
    diseaseCube [City:: Seoul ] =  0 ;
    diseaseCube [City:: Shanghai ] =  0 ;
    diseaseCube [City:: StPetersburg ] =  0 ;
    diseaseCube [City:: Sydney ] =  0 ;
    diseaseCube [City:: Taipei ] =  0 ;
    diseaseCube [City:: Tehran ] =  0 ;
    diseaseCube [City:: Tokyo ] =  0 ;
    diseaseCube [City:: Washington ] =  0 ;


}



