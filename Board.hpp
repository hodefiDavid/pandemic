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

    class Node {
        std::string cityName;
        City cityNum;
        Color color;
//        int numberOfDiseaseCube;
        std::map<City, bool> connectedCities;
    public:
        Node(std::string city_name, Color city_color, City city_num) : cityName(std::move(city_name)),
                                                                       color(std::move(city_color)), cityNum(city_num) {
            for (auto cc: connectedCities) {
                cc.second = false;
            }
//            numberOfDiseaseCube = 0;
        }

        Node() {
            this->cityNum = City::London;
            for (auto cc: connectedCities) {
                cc.second = false;
            }
//            numberOfDiseaseCube = 0;
            this->cityName = "";
            this->color = Color::Black;
        }

//        int* getNumberOfDiseaseCube() {
//            return &numberOfDiseaseCube;
//        }

        void addNeighborsCities(Node node) {
            if (!connectedCities.contains(node.cityNum))
                connectedCities[node.cityNum] = true;
        }
    };

    class Graph {

        std::map<City, Node> allCities;
    public:
        std::map<City, int> diseaseCube;

        Node getNode(City city) {
            return allCities[city];
        }

        void addCities(std::string city_name, Color city_color, City city_num) {
            Node temp{std::move(city_name), std::move(city_color), city_num};
            allCities[city_num] = temp;
        }

    };


    class Board {

    private:
        std::map<City, int> diseaseCube;

        void readCities(std::ifstream &file);

        void buildCities(std::ifstream &file);

        std::map<City, int> citiesToNum;

        Graph graph;
    public:
        Board();

        int &operator[](City city) {
            return diseaseCube.at(city);
        }

        bool is_clean();

        void remove_cures();

        void sendErrorReadCities(int row);

        void buildNodesReadCities(std::string city_name, Color city_color, int city_num);

        void add_edge_between_cities(std::ifstream &file);

        friend std::ostream &operator<<(std::ostream &os, const Board &board);

/*
 * function that delete all the medicine that already has been discover
 * it do it for all the different disease (colors)
 */
        void remove_cure();
    };
}


