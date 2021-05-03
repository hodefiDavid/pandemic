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

namespace pandemic {

    class Node{
        std::string cityName;
        City cityNum;
        Color color;
        int numberOfDiseaseCube;
        std::map<City,bool> connectedCities;
    public:
        Node(std::string city_name,Color city_color,City city_num):cityName(std::move(city_name))
        ,color(std::move(city_color)),cityNum(city_num){
            for(auto cc: connectedCities){
                cc.second = false;}
                numberOfDiseaseCube=0;
        }
        Node();
        void addNeighborsCities(Node node){
            if (!connectedCities.contains(node.cityNum))
                connectedCities[node.cityNum]= true;
        }
    };
    class Graph{
        std::map<City, Node> allCities;
    public:
        std::map<City, int> diseaseNumber;
        void addCities(std::string city_name, Color city_color, City city_num){
            Node temp{std::move(city_name),std::move(city_color),city_num};
            allCities[city_num] = temp;
        }

    };


    class Board {
    private:
        void readCities(std::ifstream &file) ;
        void buildCities(std::ifstream &file);

        Graph graph;
    public:
        Board(){
//            readCities()
        }
        int &operator[](City city){
            return graph.diseaseNumber.at(city);
        }
        bool is_clean();
        void remove_cures();
        void sendErrorReadCities(int row);

        void sendErrorReadUnits(int row);

        void buildNodesReadCities(std::string city_name, Color city_color, int city_num);

        void add_edge_between_cities(std::ifstream &file);

        friend  std::ostream& operator<<( std::ostream& os, const Board& board);
/*
 * function that delete all the medicine that already has been discover
 * it do it for all the different disease (colors)
 */
        void remove_cure();
    };
}


