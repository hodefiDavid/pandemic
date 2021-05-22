#include <iostream>
#include <thread>
#include "sources/Board.hpp"
#include "sources/City.hpp"
#include "sources/Color.hpp"
#include "sources/colorStr.hpp"

#include "sources/FieldDoctor.hpp"
#include "sources/Medic.hpp"

using namespace pandemic;
using namespace std;


int main() {
    try {
        Board board;
        FieldDoctor fieldDoctor(board, City::Atlanta);
        fieldDoctor.take_card(City::NewYork);
        fieldDoctor.take_card(City::Washington);
        fieldDoctor.take_card(City::Chicago);
        fieldDoctor.take_card(City::SanFrancisco);

        std::cout << "Hello, World!" << std::endl;
        std::cout << "this story is about how Coronavirus spread across the globe and how we treat it" << std::endl;
        std::cout << "the disease start in china" << std::endl;
        board[City::Shanghai] = 1;
        cout << board << endl;
        std::this_thread::sleep_for(1s);
        std::cout << "the disease increase in china" << std::endl;
        board[City::Shanghai] = 2;
        cout << board << endl;
        std::this_thread::sleep_for(1s);
        std::cout << "the disease increase in china 30,000 in feb 3 2020" << std::endl;
        std::cout << "the disease increase in china" << std::endl;
        board[City::Shanghai] = 3;
        std::cout << "the disease increase in china 30,000 cases in feb 3 2020" << std::endl;
        std::cout << "by march 2 2020 there was 80,000 cases" << std::endl;
        board[City::Shanghai] = 5;
        cout << board << endl;
        std::this_thread::sleep_for(1s);

        std::cout << "the disease spread to south Korea in march 9 2020 there was 8,000 cases" << std::endl;
        board[City::Seoul] = 2;
        std::cout << "the disease spread to Italy in march 9 2020 there was 10,000 cases" << std::endl;
        board[City::Milan] = 3;
        std::cout << "the disease spread to Iran in march 9 2020 there was 8,000 cases" << std::endl;
        board[City::Tehran] = 2;
        std::cout << "the disease increase in Italy in march 23 2020 there was 80,000 cases" << std::endl;
        board[City::Milan] = 5;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
        std::cout << "the disease spread to USA" << std::endl;
        board[City::NewYork] = 2;
        board[City::Chicago] = 1;
        board[City::Washington] = 2;
        board[City::Atlanta] = 2;
        board[City::SanFrancisco] = 2;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
        std::cout << "the disease increase in USA in march 23 2020 there was 90,000 cases" << std::endl;
        board[City::NewYork] = 4;
        board[City::Chicago] = 4;
        board[City::Washington] = 4;
        board[City::Atlanta] = 4;
        board[City::SanFrancisco] = 4;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
        std::cout << "the disease spread to Germany" << std::endl;
        std::cout << "the disease increase in Germany in march 23 2020 there was 50,000 cases" << std::endl;
        std::cout << "the disease spread to Spain" << std::endl;
        std::cout << "the disease increase in Spain in march 23 2020 there was 70,000 cases" << std::endl;
        board[City::Madrid] = 5;
        std::cout << "the disease increase in Iran in march 23 2020 there was 40,000 cases" << std::endl;
        board[City::Tehran] = 4;
        std::cout << "the disease spread to Canada , in march 29 2020 there was 7,000 cases" << std::endl;
        board[City::Montreal] = 2;
        std::cout << "the disease spread to France , in march 29 2020 there was 40,000 cases" << std::endl;
        board[City::Paris] = 2;
        std::cout << "the disease spread to Brazil , in march 29 2020 there was 5,000 cases" << std::endl;
        board[City::SaoPaulo] = 1;
        std::cout << "the disease spread to Chile , in march 29 2020 there was 2000 cases" << std::endl;
        board[City::Lima] = 1;
        std::cout << "the disease spread to Australia , in march 29 2020 there was 4000 cases" << std::endl;
        board[City::Sydney] = 2;
        std::cout << "the disease spread to India , in march 29 2020 there was 1000 cases" << std::endl;
        board[City::Mumbai] = 1;
        std::cout << "the disease spread across the world as we will show in the map" << std::endl;


        for (auto& item : board.citiesToString) {
            board[item.first]++;
        }
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the disease increase in Turkey in april 23 2020 there was 300,000 cases" << std::endl;
        board[City::Istanbul] = 4;
        std::cout << "the disease increase in USA in may 3 2020 there was 1,200,000 cases" << std::endl;
        board[City::NewYork]++;
        board[City::Chicago]++;
        board[City::Washington]++;
        board[City::Atlanta]++;
        board[City::SanFrancisco]++;
        std::cout << "the disease increase in India in 6/12/2020 there was 300,000 cases" << std::endl;
        board[City::Mumbai] = 5;
        board[City::Delhi] = 5;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
        std::cout << "the disease increase in Brazil in 2/7/2020 there was 1,500,000 cases" << std::endl;
        std::cout << "the disease increase in USA in 2/7/2020 there was 3,000,000 cases" << std::endl;
        std::cout << "the disease increase in India in 2/7/2020 there was 700,000 cases" << std::endl;
        board[City::SaoPaulo] = 6;
        board[City::BuenosAires] = 6;
        board[City::Mumbai]++;
        board[City::Delhi]++;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
        std::cout << "the disease increase in Brazil in 11/8/2020 there was 3,000,000 cases" << std::endl;
        board[City::SaoPaulo]++;
        board[City::BuenosAires]++;
        std::cout << "the disease increase in USA in 11/8/2020 there was 5,500,000 cases" << std::endl;
        board[City::NewYork]++;
        board[City::Chicago]++;
        board[City::Washington]++;
        board[City::Atlanta]++;
        board[City::SanFrancisco]++;
        std::cout << "the disease increase in India in 11/8/2020 there was 2,500,000 cases" << std::endl;
        board[City::Mumbai]++;
        board[City::Delhi]++;
        std::cout << "the disease increase in Russia in 2020-09-10 there was 1,000,000 cases" << std::endl;
        board[City::Moscow] = 6;
        std::cout << "the disease increase in USA in 2020-11-09 there was 10,500,000 cases" << std::endl;
        board[City::NewYork]++;
        board[City::Chicago]++;
        board[City::Washington]++;
        board[City::Atlanta]++;
        board[City::SanFrancisco]++;
        std::cout << "the disease increase in Brazil in 2020-11-09 there was 5,000,000 cases" << std::endl;
        board[City::SaoPaulo]++;
        board[City::BuenosAires]++;
        std::cout << "the disease increase in India in 2020-11-09 there was 8,500,000 cases" << std::endl;
        board[City::Mumbai]++;
        board[City::Delhi]++;
        board[City::Mumbai]++;
        board[City::Delhi]++;
        cout << board << endl;
        std::this_thread::sleep_for(3s);
        std::cout << "the disease increase in USA in 2020-12-24 there was 20,500,000 cases" << std::endl;
        board[City::NewYork]++;
        board[City::Chicago]++;
        board[City::Washington]++;
        board[City::Atlanta]++;
        board[City::SanFrancisco]++;
        std::cout << "the disease increase in Brazil in 2020-12-24 there was 7,000,000 cases" << std::endl;
        board[City::SaoPaulo]++;
        board[City::BuenosAires]++;
        std::cout << "the disease increase in India in 2020-12-24 there was 10,500,000 cases" << std::endl;
        board[City::Mumbai]++;
        board[City::Delhi]++;
        std::cout << "the disease increase in Russia in 2020-12-24 there was 3,000,000 cases" << std::endl;
        board[City::Moscow]++;
        board[City::Moscow]++;
        std::cout << "the disease spread to France , in 2020-12-24 there was 2,300,000 cases" << std::endl;
        board[City::Paris] = 6;

        for (auto &item : board.citiesToString) {
            if (board[item.first] > 3)
                board[item.first]++;
            else {
                board[item.first] = 3;
            }
        }
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "*********************************************************************************" << std::endl;
        std::cout << "*********************** we find a vaccine for the disease ***********************" << std::endl;
        std::cout << "*********************************************************************************" << std::endl;
        std::this_thread::sleep_for(1s);
        std::cout << "\n\n*** fieldDoctor treat every city on the map (take out one disease cube)********"
                  << std::endl;

        for (auto &item : board.citiesToString) {
            fieldDoctor.take_card(item.first);
            fieldDoctor.fly_direct(item.first);
            fieldDoctor.take_card(item.first);
            fieldDoctor.treat(item.first);
        }
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the disease keep increasing over the world " << std::endl;
        std::cout << "in 2021-05-18 there was: " << std::endl;
        std::cout << "33,000,000 cases in USA" << std::endl;
        std::cout << "25,000,000 cases in India" << std::endl;
        std::cout << "15,000,000 cases in Brazil" << std::endl;
        std::cout << "5,000,000 cases in Russia" << std::endl;
        std::cout << "5,000,000 cases in Turkey" << std::endl;
        std::cout << "5,000,000 cases in France" << std::endl;
        std::cout << "3,600,000 cases in Spain" << std::endl;
        std::cout << "3,300,000 cases in Argentina" << std::endl;
        std::cout << "3,100,000 cases in Colombia" << std::endl;
        std::cout << "and a lot more cases over the world " << std::endl;
        cout << board << endl;
        std::this_thread::sleep_for(2s);
       string temp = BOLD("this data IS REAL it was taken from https://www.worldometers.info/coronavirus and other sources" );
        std::cout<<temp<< std::endl;
        temp="\n\nfrom here and now we will continue the game";
        temp=   temp+BOLD(" not how it really happen") + ", thank you  for your understanding\n\n";
        std::cout<<temp<< std::endl;

        std::cout << "lucky for us the field doctor build Research Station in Atlanta" << std::endl;
        fieldDoctor.take_card(City::Atlanta);
        //the field doctor take five card in a blue color
        fieldDoctor.fly_direct(City::Atlanta);
        fieldDoctor.take_card(City::Atlanta);

        fieldDoctor.build();

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        fieldDoctor.take_card(City::London);
        fieldDoctor.take_card(City::Atlanta);
        fieldDoctor.take_card(City::Montreal);
        fieldDoctor.take_card(City::Chicago);
        fieldDoctor.take_card(City::SanFrancisco);

        fieldDoctor.discover_cure(pandemic::Color::Blue);
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "lucky for us the field doctor called his buddy the awesome Medic " << std::endl;

        Medic medic{board, City::Atlanta};
        std::cout << "the Medic treat every city in north america" << std::endl;
        medic.take_card(City::Montreal);
        medic.fly_direct(City::Montreal);
        medic.take_card(City::NewYork);
        medic.fly_direct(City::NewYork);
        medic.take_card(City::Chicago);
        medic.fly_direct(City::Chicago);
        medic.take_card(City::SanFrancisco);
        medic.fly_direct(City::SanFrancisco);
        medic.take_card(City::Atlanta);
        medic.fly_direct(City::Atlanta);
        medic.take_card(City::Washington);
        medic.fly_direct(City::Washington);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "lucky for us the field doctor build Research Station in Bogota" << std::endl;
        fieldDoctor.take_card(City::Bogota);
        //the field doctor take five card in a blue color
        fieldDoctor.fly_direct(City::Bogota);
        fieldDoctor.take_card(City::Bogota);

        fieldDoctor.build();
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        fieldDoctor.take_card(City::Bogota);
        fieldDoctor.take_card(City::Miami);
        fieldDoctor.take_card(City::SaoPaulo);
        fieldDoctor.take_card(City::LosAngeles);
        fieldDoctor.take_card(City::BuenosAires);

        fieldDoctor.discover_cure(pandemic::Color::Yellow);
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the Medic treat every city in south america" << std::endl;
        medic.take_card(City::LosAngeles);
        medic.fly_direct(City::LosAngeles);
        medic.take_card(City::MexicoCity);
        medic.fly_direct(City::MexicoCity);
        medic.take_card(City::Miami);
        medic.fly_direct(City::Miami);
        medic.take_card(City::Bogota);
        medic.fly_direct(City::Bogota);
        medic.take_card(City::SaoPaulo);
        medic.fly_direct(City::SaoPaulo);
        medic.take_card(City::Lima);
        medic.fly_direct(City::Lima);
        medic.take_card(City::Santiago);
        medic.fly_direct(City::Santiago);
        medic.take_card(City::BuenosAires);
        medic.fly_direct(City::BuenosAires);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "lucky for us the field doctor build Research Station in Mumbai" << std::endl;
        fieldDoctor.take_card(City::Mumbai);
        //the field doctor take five card in a blue color
        fieldDoctor.fly_direct(City::Mumbai);
        fieldDoctor.take_card(City::Mumbai);

        fieldDoctor.build();

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        fieldDoctor.take_card(City::Mumbai);
        fieldDoctor.take_card(City::Cairo);
        fieldDoctor.take_card(City::Algiers);
        fieldDoctor.take_card(City::Istanbul);
        fieldDoctor.take_card(City::Baghdad);

        fieldDoctor.discover_cure(pandemic::Color::Black);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the Medic treat every city in the middle east" << std::endl;
        medic.take_card(City::Algiers);
        medic.fly_direct(City::Algiers);
        medic.take_card(City::Istanbul);
        medic.fly_direct(City::Istanbul);
        medic.take_card(City::Cairo);
        medic.fly_direct(City::Cairo);
        medic.take_card(City::Moscow);
        medic.fly_direct(City::Moscow);
        medic.take_card(City::Baghdad);
        medic.fly_direct(City::Baghdad);
        medic.take_card(City::Riyadh);
        medic.fly_direct(City::Riyadh);
        medic.take_card(City::Mumbai);
        medic.fly_direct(City::Mumbai);
        medic.take_card(City::Tehran);
        medic.fly_direct(City::Tehran);
        medic.take_card(City::Karachi);
        medic.fly_direct(City::Karachi);
        medic.take_card(City::Delhi);
        medic.fly_direct(City::Delhi);
        medic.take_card(City::Kolkata);
        medic.fly_direct(City::Kolkata);
        medic.take_card(City::Chennai);
        medic.fly_direct(City::Chennai);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "lucky for us the field doctor build Research Station in Sydney" << std::endl;
        fieldDoctor.take_card(City::Sydney);
        //the field doctor take five card in a blue color
        fieldDoctor.fly_direct(City::Sydney);
        fieldDoctor.take_card(City::Sydney);

        fieldDoctor.build();
        cout << board << endl;
        std::this_thread::sleep_for(2s);

        fieldDoctor.take_card(City::Sydney);
        fieldDoctor.take_card(City::Tokyo);
        fieldDoctor.take_card(City::Shanghai);
        fieldDoctor.take_card(City::Beijing);
        fieldDoctor.take_card(City::HongKong);

        fieldDoctor.discover_cure(pandemic::Color::Red);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the Medic treat every city in the east" << std::endl;
        medic.take_card(City::Sydney);
        medic.fly_direct(City::Sydney);
        medic.take_card(City::Jakarta);
        medic.fly_direct(City::Jakarta);
        medic.take_card(City::HoChiMinhCity);
        medic.fly_direct(City::HoChiMinhCity);
        medic.take_card(City::Manila);
        medic.fly_direct(City::Manila);
        medic.take_card(City::Bangkok);
        medic.fly_direct(City::Bangkok);
        medic.take_card(City::HongKong);
        medic.fly_direct(City::HongKong);
        medic.take_card(City::Taipei);
        medic.fly_direct(City::Taipei);
        medic.take_card(City::Osaka);
        medic.fly_direct(City::Osaka);
        medic.take_card(City::Shanghai);
        medic.fly_direct(City::Shanghai);
        medic.take_card(City::Tokyo);
        medic.fly_direct(City::Tokyo);
        medic.take_card(City::Beijing);
        medic.fly_direct(City::Beijing);
        medic.take_card(City::Seoul);
        medic.fly_direct(City::Seoul);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the Doctor went to treat every city in the rest of the world" << std::endl;
        std::cout << "the Doctor went to Europe to treat every city there" << std::endl;

        fieldDoctor.take_card(City::StPetersburg);
        fieldDoctor.fly_direct(City::StPetersburg);
        fieldDoctor.take_card(City::StPetersburg);
        fieldDoctor.treat(City::StPetersburg);

        fieldDoctor.take_card(City::Paris);
        fieldDoctor.fly_direct(City::Paris);

        fieldDoctor.take_card(City::Milan);
        fieldDoctor.take_card(City::Madrid);
        fieldDoctor.take_card(City::London);
        fieldDoctor.take_card(City::Paris);
        fieldDoctor.take_card(City::Essen);
//treat near by cities the super ability of the field doctor
        fieldDoctor.treat(City::Milan);
        fieldDoctor.treat(City::Madrid);
        fieldDoctor.treat(City::London);
        fieldDoctor.treat(City::Paris);
        fieldDoctor.treat(City::Essen);

        cout << board << endl;
        std::this_thread::sleep_for(2s);

        std::cout << "the Doctor went to Africa to treat every city there" << std::endl;

        fieldDoctor.take_card(City::Kinshasa);
        fieldDoctor.fly_direct(City::Kinshasa);

        fieldDoctor.take_card(City::Kinshasa);
        fieldDoctor.take_card(City::Khartoum);
        fieldDoctor.take_card(City::Johannesburg);
        fieldDoctor.take_card(City::Lagos);

        //treat near by cities the super ability of the field doctor
        fieldDoctor.treat(City::Kinshasa);
        fieldDoctor.treat(City::Khartoum);
        fieldDoctor.treat(City::Johannesburg);
        fieldDoctor.treat(City::Lagos);

        cout << board << endl;


    } catch (exception& e) {
        cout<<e.what() ;
    }

    return 0;
}
