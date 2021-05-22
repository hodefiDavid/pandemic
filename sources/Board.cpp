//
// Created by david on 5/3/21.
//

#include "Board.hpp"
#include <sstream>
#include <string>

using namespace pandemic;
using namespace std;
bool Board::is_clean() {
    for (auto &i : diseaseCube) {
        if (i.second > 0) {
            return false;
        }
    }
    return true;
}

void Board::remove_cures() {
    for (auto &c : isDiseaseCure) {
        c.second = false;
    }
}
void Board::remove_stations() {
    for (auto &item : gotResearchStations) {
        item.second = false;

    }
}

Board::Board() {

    //init cities to num map
    {
//        citiesToNum[City::Algiers] = 0;
//        citiesToNum[City::Atlanta] = 1;
//        citiesToNum[City::Baghdad] = 2;
//        citiesToNum[City::Bangkok] = 3;
//        citiesToNum[City::Beijing] = 4;
//        citiesToNum[City::Bogota] = 5;
//        citiesToNum[City::BuenosAires] = 6;
//        citiesToNum[City::Cairo] = 7;
//        citiesToNum[City::Chennai] = 8;
//        citiesToNum[City::Chicago] = 9;
//        citiesToNum[City::Delhi] = 10;
//        citiesToNum[City::Essen] = 11;
//        citiesToNum[City::HoChiMinhCity] = 12;
//        citiesToNum[City::HongKong] = 13;
//        citiesToNum[City::Istanbul] = 14;
//        citiesToNum[City::Jakarta] = 15;
//        citiesToNum[City::Johannesburg] = 16;
//        citiesToNum[City::Karachi] = 17;
//        citiesToNum[City::Khartoum] = 18;
//        citiesToNum[City::Kinshasa] = 19;
//        citiesToNum[City::Kolkata] = 20;
//        citiesToNum[City::Lagos] = 21;
//        citiesToNum[City::Lima] = 22;
//        citiesToNum[City::London] = 23;
//        citiesToNum[City::LosAngeles] = 24;
//        citiesToNum[City::Madrid] = 25;
//        citiesToNum[City::Manila] = 26;
//        citiesToNum[City::MexicoCity] = 27;
//        citiesToNum[City::Miami] = 28;
//        citiesToNum[City::Milan] = 29;
//        citiesToNum[City::Montreal] = 30;
//        citiesToNum[City::Moscow] = 31;
//        citiesToNum[City::Mumbai] = 32;
//        citiesToNum[City::NewYork] = 33;
//        citiesToNum[City::Osaka] = 34;
//        citiesToNum[City::Paris] = 35;
//        citiesToNum[City::Riyadh] = 36;
//        citiesToNum[City::SanFrancisco] = 37;
//        citiesToNum[City::Santiago] = 38;
//        citiesToNum[City::SaoPaulo] = 39;
//        citiesToNum[City::Seoul] = 40;
//        citiesToNum[City::Shanghai] = 41;
//        citiesToNum[City::StPetersburg] = 42;
//        citiesToNum[City::Sydney] = 43;
//        citiesToNum[City::Taipei] = 44;
//        citiesToNum[City::Tehran] = 45;
//        citiesToNum[City::Tokyo] = 46;
//        citiesToNum[City::Washington] = 47;
    }
    //init diseaseCube map
    {
        diseaseCube[City::Algiers] = 0;
        diseaseCube[City::Atlanta] = 0;
        diseaseCube[City::Baghdad] = 0;
        diseaseCube[City::Bangkok] = 0;
        diseaseCube[City::Beijing] = 0;
        diseaseCube[City::Bogota] = 0;
        diseaseCube[City::BuenosAires] = 0;
        diseaseCube[City::Cairo] = 0;
        diseaseCube[City::Chennai] = 0;
        diseaseCube[City::Chicago] = 0;
        diseaseCube[City::Delhi] = 0;
        diseaseCube[City::Essen] = 0;
        diseaseCube[City::HoChiMinhCity] = 0;
        diseaseCube[City::HongKong] = 0;
        diseaseCube[City::Istanbul] = 0;
        diseaseCube[City::Jakarta] = 0;
        diseaseCube[City::Johannesburg] = 0;
        diseaseCube[City::Karachi] = 0;
        diseaseCube[City::Khartoum] = 0;
        diseaseCube[City::Kinshasa] = 0;
        diseaseCube[City::Kolkata] = 0;
        diseaseCube[City::Lagos] = 0;
        diseaseCube[City::Lima] = 0;
        diseaseCube[City::London] = 0;
        diseaseCube[City::LosAngeles] = 0;
        diseaseCube[City::Madrid] = 0;
        diseaseCube[City::Manila] = 0;
        diseaseCube[City::MexicoCity] = 0;
        diseaseCube[City::Miami] = 0;
        diseaseCube[City::Milan] = 0;
        diseaseCube[City::Montreal] = 0;
        diseaseCube[City::Moscow] = 0;
        diseaseCube[City::Mumbai] = 0;
        diseaseCube[City::NewYork] = 0;
        diseaseCube[City::Osaka] = 0;
        diseaseCube[City::Paris] = 0;
        diseaseCube[City::Riyadh] = 0;
        diseaseCube[City::SanFrancisco] = 0;
        diseaseCube[City::Santiago] = 0;
        diseaseCube[City::SaoPaulo] = 0;
        diseaseCube[City::Seoul] = 0;
        diseaseCube[City::Shanghai] = 0;
        diseaseCube[City::StPetersburg] = 0;
        diseaseCube[City::Sydney] = 0;
        diseaseCube[City::Taipei] = 0;
        diseaseCube[City::Tehran] = 0;
        diseaseCube[City::Tokyo] = 0;
        diseaseCube[City::Washington] = 0;
    }
    // init cityColor
    {
        cityColor[City::Algiers] = Color::Black;
        cityColor[City::Atlanta] = Color::Blue;
        cityColor[City::Baghdad] = Color::Black;
        cityColor[City::Bangkok] = Color::Red;
        cityColor[City::Beijing] = Color::Red;
        cityColor[City::Bogota] = Color::Yellow;
        cityColor[City::BuenosAires] = Color::Yellow;
        cityColor[City::Cairo] = Color::Black;
        cityColor[City::Chennai] = Color::Black;
        cityColor[City::Chicago] = Color::Blue;
        cityColor[City::Delhi] = Color::Black;
        cityColor[City::Essen] = Color::Blue;
        cityColor[City::HoChiMinhCity] = Color::Red;
        cityColor[City::HongKong] = Color::Red;
        cityColor[City::Istanbul] = Color::Black;
        cityColor[City::Jakarta] = Color::Red;
        cityColor[City::Johannesburg] = Color::Yellow;
        cityColor[City::Karachi] = Color::Black;
        cityColor[City::Khartoum] = Color::Yellow;
        cityColor[City::Kinshasa] = Color::Yellow;
        cityColor[City::Kolkata] = Color::Black;
        cityColor[City::Lagos] = Color::Yellow;
        cityColor[City::Lima] = Color::Yellow;
        cityColor[City::London] = Color::Blue;
        cityColor[City::LosAngeles] = Color::Yellow;
        cityColor[City::Madrid] = Color::Blue;
        cityColor[City::Manila] = Color::Red;
        cityColor[City::MexicoCity] = Color::Yellow;
        cityColor[City::Miami] = Color::Yellow;
        cityColor[City::Milan] = Color::Blue;
        cityColor[City::Montreal] = Color::Blue;
        cityColor[City::Moscow] = Color::Black;
        cityColor[City::Mumbai] = Color::Black;
        cityColor[City::NewYork] = Color::Blue;
        cityColor[City::Osaka] = Color::Red;
        cityColor[City::Paris] = Color::Blue;
        cityColor[City::Riyadh] = Color::Black;
        cityColor[City::SanFrancisco] = Color::Blue;
        cityColor[City::Santiago] = Color::Yellow;
        cityColor[City::SaoPaulo] = Color::Yellow;
        cityColor[City::Seoul] = Color::Red;
        cityColor[City::Shanghai] = Color::Red;
        cityColor[City::StPetersburg] = Color::Blue;
        cityColor[City::Sydney] = Color::Red;
        cityColor[City::Taipei] = Color::Red;
        cityColor[City::Tehran] = Color::Black;
        cityColor[City::Tokyo] = Color::Red;
        cityColor[City::Washington] = Color::Blue;
    }
    //init isDiseaseCure
    {
        isDiseaseCure[Color::Black] = false;
        isDiseaseCure[Color::Yellow] = false;
        isDiseaseCure[Color::Blue] = false;
        isDiseaseCure[Color::Red] = false;
    }
    //init allCities
    {
        allCities[City::Algiers][City::Madrid] = true;
        allCities[City::Algiers][City::Paris] = true;
        allCities[City::Algiers][City::Istanbul] = true;
        allCities[City::Algiers][City::Cairo] = true;
        allCities[City::Atlanta][City::Chicago] = true;
        allCities[City::Atlanta][City::Miami] = true;
        allCities[City::Atlanta][City::Washington] = true;
        allCities[City::Baghdad][City::Tehran] = true;
        allCities[City::Baghdad][City::Istanbul] = true;
        allCities[City::Baghdad][City::Cairo] = true;
        allCities[City::Baghdad][City::Riyadh] = true;
        allCities[City::Baghdad][City::Karachi] = true;
        allCities[City::Bangkok][City::Kolkata] = true;
        allCities[City::Bangkok][City::Chennai] = true;
        allCities[City::Bangkok][City::Jakarta] = true;
        allCities[City::Bangkok][City::HoChiMinhCity] = true;
        allCities[City::Bangkok][City::HongKong] = true;
        allCities[City::Beijing][City::Shanghai] = true;
        allCities[City::Beijing][City::Seoul] = true;
        allCities[City::Bogota][City::MexicoCity] = true;
        allCities[City::Bogota][City::Lima] = true;
        allCities[City::Bogota][City::Miami] = true;
        allCities[City::Bogota][City::SaoPaulo] = true;
        allCities[City::Bogota][City::BuenosAires] = true;
        allCities[City::BuenosAires][City::Bogota] = true;
        allCities[City::BuenosAires][City::SaoPaulo] = true;
        allCities[City::Cairo][City::Algiers] = true;
        allCities[City::Cairo][City::Istanbul] = true;
        allCities[City::Cairo][City::Baghdad] = true;
        allCities[City::Cairo][City::Khartoum] = true;
        allCities[City::Cairo][City::Riyadh] = true;
        allCities[City::Chennai][City::Mumbai] = true;
        allCities[City::Chennai][City::Delhi] = true;
        allCities[City::Chennai][City::Kolkata] = true;
        allCities[City::Chennai][City::Bangkok] = true;
        allCities[City::Chennai][City::Jakarta] = true;
        allCities[City::Chicago][City::SanFrancisco] = true;
        allCities[City::Chicago][City::LosAngeles] = true;
        allCities[City::Chicago][City::MexicoCity] = true;
        allCities[City::Chicago][City::Atlanta] = true;
        allCities[City::Chicago][City::Montreal] = true;
        allCities[City::Delhi][City::Tehran] = true;
        allCities[City::Delhi][City::Karachi] = true;
        allCities[City::Delhi][City::Mumbai] = true;
        allCities[City::Delhi][City::Chennai] = true;
        allCities[City::Delhi][City::Kolkata] = true;
        allCities[City::Essen][City::London] = true;
        allCities[City::Essen][City::Paris] = true;
        allCities[City::Essen][City::Milan] = true;
        allCities[City::Essen][City::StPetersburg] = true;
        allCities[City::HoChiMinhCity][City::Jakarta] = true;
        allCities[City::HoChiMinhCity][City::Bangkok] = true;
        allCities[City::HoChiMinhCity][City::HongKong] = true;
        allCities[City::HoChiMinhCity][City::Manila] = true;
        allCities[City::HongKong][City::Bangkok] = true;
        allCities[City::HongKong][City::Kolkata] = true;
        allCities[City::HongKong][City::HoChiMinhCity] = true;
        allCities[City::HongKong][City::Shanghai] = true;
        allCities[City::HongKong][City::Manila] = true;
        allCities[City::HongKong][City::Taipei] = true;
        allCities[City::Istanbul][City::Milan] = true;
        allCities[City::Istanbul][City::Algiers] = true;
        allCities[City::Istanbul][City::StPetersburg] = true;
        allCities[City::Istanbul][City::Cairo] = true;
        allCities[City::Istanbul][City::Baghdad] = true;
        allCities[City::Istanbul][City::Moscow] = true;
        allCities[City::Jakarta][City::Chennai] = true;
        allCities[City::Jakarta][City::Bangkok] = true;
        allCities[City::Jakarta][City::HoChiMinhCity] = true;
        allCities[City::Jakarta][City::Sydney] = true;
        allCities[City::Johannesburg][City::Kinshasa] = true;
        allCities[City::Johannesburg][City::Khartoum] = true;
        allCities[City::Karachi][City::Tehran] = true;
        allCities[City::Karachi][City::Baghdad] = true;
        allCities[City::Karachi][City::Riyadh] = true;
        allCities[City::Karachi][City::Mumbai] = true;
        allCities[City::Karachi][City::Delhi] = true;
        allCities[City::Khartoum][City::Cairo] = true;
        allCities[City::Khartoum][City::Lagos] = true;
        allCities[City::Khartoum][City::Kinshasa] = true;
        allCities[City::Khartoum][City::Johannesburg] = true;
        allCities[City::Kinshasa][City::Lagos] = true;
        allCities[City::Kinshasa][City::Khartoum] = true;
        allCities[City::Kinshasa][City::Johannesburg] = true;
        allCities[City::Kolkata][City::Delhi] = true;
        allCities[City::Kolkata][City::Chennai] = true;
        allCities[City::Kolkata][City::Bangkok] = true;
        allCities[City::Kolkata][City::HongKong] = true;
        allCities[City::Lagos][City::SaoPaulo] = true;
        allCities[City::Lagos][City::Khartoum] = true;
        allCities[City::Lagos][City::Kinshasa] = true;
        allCities[City::Lima][City::MexicoCity] = true;
        allCities[City::Lima][City::Bogota] = true;
        allCities[City::Lima][City::Santiago] = true;
        allCities[City::London][City::NewYork] = true;
        allCities[City::London][City::Madrid] = true;
        allCities[City::London][City::Essen] = true;
        allCities[City::London][City::Paris] = true;
        allCities[City::LosAngeles][City::SanFrancisco] = true;
        allCities[City::LosAngeles][City::Chicago] = true;
        allCities[City::LosAngeles][City::MexicoCity] = true;
        allCities[City::LosAngeles][City::Sydney] = true;
        allCities[City::Madrid][City::London] = true;
        allCities[City::Madrid][City::NewYork] = true;
        allCities[City::Madrid][City::Paris] = true;
        allCities[City::Madrid][City::SaoPaulo] = true;
        allCities[City::Madrid][City::Algiers] = true;
        allCities[City::Manila][City::Taipei] = true;
        allCities[City::Manila][City::SanFrancisco] = true;
        allCities[City::Manila][City::HoChiMinhCity] = true;
        allCities[City::Manila][City::HongKong] = true;
        allCities[City::Manila][City::Sydney] = true;
        allCities[City::MexicoCity][City::LosAngeles] = true;
        allCities[City::MexicoCity][City::Chicago] = true;
        allCities[City::MexicoCity][City::Miami] = true;
        allCities[City::MexicoCity][City::Lima] = true;
        allCities[City::MexicoCity][City::Bogota] = true;
        allCities[City::Miami][City::Atlanta] = true;
        allCities[City::Miami][City::MexicoCity] = true;
        allCities[City::Miami][City::Washington] = true;
        allCities[City::Miami][City::Bogota] = true;
        allCities[City::Milan][City::Essen] = true;
        allCities[City::Milan][City::Paris] = true;
        allCities[City::Milan][City::Istanbul] = true;
        allCities[City::Montreal][City::Chicago] = true;
        allCities[City::Montreal][City::Washington] = true;
        allCities[City::Montreal][City::NewYork] = true;
        allCities[City::Moscow][City::StPetersburg] = true;
        allCities[City::Moscow][City::Istanbul] = true;
        allCities[City::Moscow][City::Tehran] = true;
        allCities[City::Mumbai][City::Karachi] = true;
        allCities[City::Mumbai][City::Delhi] = true;
        allCities[City::Mumbai][City::Chennai] = true;
        allCities[City::NewYork][City::Montreal] = true;
        allCities[City::NewYork][City::Washington] = true;
        allCities[City::NewYork][City::London] = true;
        allCities[City::NewYork][City::Madrid] = true;
        allCities[City::Osaka][City::Taipei] = true;
        allCities[City::Osaka][City::Tokyo] = true;
        allCities[City::Paris][City::Algiers] = true;
        allCities[City::Paris][City::Essen] = true;
        allCities[City::Paris][City::Madrid] = true;
        allCities[City::Paris][City::Milan] = true;
        allCities[City::Paris][City::London] = true;
        allCities[City::Riyadh][City::Baghdad] = true;
        allCities[City::Riyadh][City::Cairo] = true;
        allCities[City::Riyadh][City::Karachi] = true;
        allCities[City::SanFrancisco][City::LosAngeles] = true;
        allCities[City::SanFrancisco][City::Chicago] = true;
        allCities[City::SanFrancisco][City::Tokyo] = true;
        allCities[City::SanFrancisco][City::Manila] = true;
        allCities[City::Santiago][City::Lima] = true;
        allCities[City::SaoPaulo][City::Bogota] = true;
        allCities[City::SaoPaulo][City::BuenosAires] = true;
        allCities[City::SaoPaulo][City::Lagos] = true;
        allCities[City::SaoPaulo][City::Madrid] = true;
        allCities[City::Seoul][City::Beijing] = true;
        allCities[City::Seoul][City::Shanghai] = true;
        allCities[City::Seoul][City::Tokyo] = true;
        allCities[City::Shanghai][City::Beijing] = true;
        allCities[City::Shanghai][City::HongKong] = true;
        allCities[City::Shanghai][City::Taipei] = true;
        allCities[City::Shanghai][City::Seoul] = true;
        allCities[City::Shanghai][City::Tokyo] = true;
        allCities[City::StPetersburg][City::Essen] = true;
        allCities[City::StPetersburg][City::Istanbul] = true;
        allCities[City::StPetersburg][City::Moscow] = true;
        allCities[City::Sydney][City::Jakarta] = true;
        allCities[City::Sydney][City::Manila] = true;
        allCities[City::Sydney][City::LosAngeles] = true;
        allCities[City::Taipei][City::Shanghai] = true;
        allCities[City::Taipei][City::HongKong] = true;
        allCities[City::Taipei][City::Osaka] = true;
        allCities[City::Taipei][City::Manila] = true;
        allCities[City::Tehran][City::Baghdad] = true;
        allCities[City::Tehran][City::Moscow] = true;
        allCities[City::Tehran][City::Karachi] = true;
        allCities[City::Tehran][City::Delhi] = true;
        allCities[City::Tokyo][City::Seoul] = true;
        allCities[City::Tokyo][City::Shanghai] = true;
        allCities[City::Tokyo][City::Osaka] = true;
        allCities[City::Tokyo][City::SanFrancisco] = true;
        allCities[City::Washington][City::Atlanta] = true;
        allCities[City::Washington][City::NewYork] = true;
        allCities[City::Washington][City::Montreal] = true;
        allCities[City::Washington][City::Miami] = true;
    }
    //init gotResearchStations
    {
        gotResearchStations[City::Algiers] = false;
        gotResearchStations[City::Atlanta] = false;
        gotResearchStations[City::Baghdad] = false;
        gotResearchStations[City::Bangkok] = false;
        gotResearchStations[City::Beijing] = false;
        gotResearchStations[City::Bogota] = false;
        gotResearchStations[City::BuenosAires] = false;
        gotResearchStations[City::Cairo] = false;
        gotResearchStations[City::Chennai] = false;
        gotResearchStations[City::Chicago] = false;
        gotResearchStations[City::Delhi] = false;
        gotResearchStations[City::Essen] = false;
        gotResearchStations[City::HoChiMinhCity] = false;
        gotResearchStations[City::HongKong] = false;
        gotResearchStations[City::Istanbul] = false;
        gotResearchStations[City::Jakarta] = false;
        gotResearchStations[City::Johannesburg] = false;
        gotResearchStations[City::Karachi] = false;
        gotResearchStations[City::Khartoum] = false;
        gotResearchStations[City::Kinshasa] = false;
        gotResearchStations[City::Kolkata] = false;
        gotResearchStations[City::Lagos] = false;
        gotResearchStations[City::Lima] = false;
        gotResearchStations[City::London] = false;
        gotResearchStations[City::LosAngeles] = false;
        gotResearchStations[City::Madrid] = false;
        gotResearchStations[City::Manila] = false;
        gotResearchStations[City::MexicoCity] = false;
        gotResearchStations[City::Miami] = false;
        gotResearchStations[City::Milan] = false;
        gotResearchStations[City::Montreal] = false;
        gotResearchStations[City::Moscow] = false;
        gotResearchStations[City::Mumbai] = false;
        gotResearchStations[City::NewYork] = false;
        gotResearchStations[City::Osaka] = false;
        gotResearchStations[City::Paris] = false;
        gotResearchStations[City::Riyadh] = false;
        gotResearchStations[City::SanFrancisco] = false;
        gotResearchStations[City::Santiago] = false;
        gotResearchStations[City::SaoPaulo] = false;
        gotResearchStations[City::Seoul] = false;
        gotResearchStations[City::Shanghai] = false;
        gotResearchStations[City::StPetersburg] = false;
        gotResearchStations[City::Sydney] = false;
        gotResearchStations[City::Taipei] = false;
        gotResearchStations[City::Tehran] = false;
        gotResearchStations[City::Tokyo] = false;
        gotResearchStations[City::Washington] = false;
    }
    //init citiesToString
    {
        citiesToString[City::Algiers] = "Algiers";
        citiesToString[City::Atlanta] = "Atlanta";
        citiesToString[City::Baghdad] = "Baghdad";
        citiesToString[City::Bangkok] = "Bangkok";
        citiesToString[City::Beijing] = "Beijing";
        citiesToString[City::Bogota] = "Bogota";
        citiesToString[City::BuenosAires] = "BuenosAires";
        citiesToString[City::Cairo] = "Cairo";
        citiesToString[City::Chennai] = "Chennai";
        citiesToString[City::Chicago] = "Chicago";
        citiesToString[City::Delhi] = "Delhi";
        citiesToString[City::Essen] = "Essen";
        citiesToString[City::HoChiMinhCity] = "HoChiMinhCity";
        citiesToString[City::HongKong] = "HongKong";
        citiesToString[City::Istanbul] = "Istanbul";
        citiesToString[City::Jakarta] = "Jakarta";
        citiesToString[City::Johannesburg] = "Johannesburg";
        citiesToString[City::Karachi] = "Karachi";
        citiesToString[City::Khartoum] = "Khartoum";
        citiesToString[City::Kinshasa] = "Kinshasa";
        citiesToString[City::Kolkata] = "Kolkata";
        citiesToString[City::Lagos] = "Lagos";
        citiesToString[City::Lima] = "Lima";
        citiesToString[City::London] = "London";
        citiesToString[City::LosAngeles] = "LosAngeles";
        citiesToString[City::Madrid] = "Madrid";
        citiesToString[City::Manila] = "Manila";
        citiesToString[City::MexicoCity] = "MexicoCity";
        citiesToString[City::Miami] = "Miami";
        citiesToString[City::Milan] = "Milan";
        citiesToString[City::Montreal] = "Montreal";
        citiesToString[City::Moscow] = "Moscow";
        citiesToString[City::Mumbai] = "Mumbai";
        citiesToString[City::NewYork] = "NewYork";
        citiesToString[City::Osaka] = "Osaka";
        citiesToString[City::Paris] = "Paris";
        citiesToString[City::Riyadh] = "Riyadh";
        citiesToString[City::SanFrancisco] = "SanFrancisco";
        citiesToString[City::Santiago] = "Santiago";
        citiesToString[City::SaoPaulo] = "SaoPaulo";
        citiesToString[City::Seoul] = "Seoul";
        citiesToString[City::Shanghai] = "Shanghai";
        citiesToString[City::StPetersburg] = "StPetersburg";
        citiesToString[City::Sydney] = "Sydney";
        citiesToString[City::Taipei] = "Taipei";
        citiesToString[City::Tehran] = "Tehran";
        citiesToString[City::Tokyo] = "Tokyo";
        citiesToString[City::Washington] = "Washington";
    }
    //init CtWC
    {CtWC[City::Algiers] ="Bk Algiers";
        CtWC[City::Atlanta] ="Bl Atlanta";
        CtWC[City::Baghdad] ="Bk Baghdad";
        CtWC[City::Bangkok] ="R Bangkok";
        CtWC[City::Beijing] ="R Beijing";
        CtWC[City::Bogota] ="Y Bogota";
        CtWC[City::BuenosAires] ="Y BuenosAires";
        CtWC[City::Cairo] ="Bk Cairo";
        CtWC[City::Chennai] ="Bk Chennai";
        CtWC[City::Chicago] ="Bl Chicago";
        CtWC[City::Delhi] ="Bk Delhi";
        CtWC[City::Essen] ="Bl Essen";
        CtWC[City::HoChiMinhCity] ="R HoChiMinhCity";
        CtWC[City::HongKong] ="R HongKong";
        CtWC[City::Istanbul] ="Bk Istanbul";
        CtWC[City::Jakarta] ="R Jakarta";
        CtWC[City::Johannesburg] ="Y Johannesburg";
        CtWC[City::Karachi] ="Bk Karachi";
        CtWC[City::Khartoum] ="Y Khartoum";
        CtWC[City::Kinshasa] ="Y Kinshasa";
        CtWC[City::Kolkata] ="Bk Kolkata";
        CtWC[City::Lagos] ="Y Lagos";
        CtWC[City::Lima] ="Y Lima";
        CtWC[City::London] ="Bl London";
        CtWC[City::LosAngeles] ="Y LosAngeles";
        CtWC[City::Madrid] ="Bl Madrid";
        CtWC[City::Manila] ="R Manila";
        CtWC[City::MexicoCity] ="Y MexicoCity";
        CtWC[City::Miami] ="Y Miami";
        CtWC[City::Milan] ="Bl Milan";
        CtWC[City::Montreal] ="Bl Montreal";
        CtWC[City::Moscow] ="Bk Moscow";
        CtWC[City::Mumbai] ="Bk Mumbai";
        CtWC[City::NewYork] ="Bl NewYork";
        CtWC[City::Osaka] ="R Osaka";
        CtWC[City::Paris] ="Bl Paris";
        CtWC[City::Riyadh] ="Bk Riyadh";
        CtWC[City::SanFrancisco] ="Bl SanFrancisco";
        CtWC[City::Santiago] ="Y Santiago";
        CtWC[City::SaoPaulo] ="Y SaoPaulo";
        CtWC[City::Seoul] ="R Seoul";
        CtWC[City::Shanghai] ="R Shanghai";
        CtWC[City::StPetersburg] ="Bl StPetersburg";
        CtWC[City::Sydney] ="R Sydney";
        CtWC[City::Taipei] ="R Taipei";
        CtWC[City::Tehran] ="Bk Tehran";
        CtWC[City::Tokyo] ="R Tokyo";
        CtWC[City::Washington] ="Bl Washington";
    }
    //init ctTsh
    {
        ctTsh[City::Algiers] ="";
        ctTsh[City::Atlanta] ="";
        ctTsh[City::Baghdad] ="";
        ctTsh[City::Bangkok] ="";
        ctTsh[City::Beijing] ="";
        ctTsh[City::Bogota] ="";
        ctTsh[City::BuenosAires] ="";
        ctTsh[City::Cairo] ="";
        ctTsh[City::Chennai] ="";
        ctTsh[City::Chicago] ="";
        ctTsh[City::Delhi] ="";
        ctTsh[City::Essen] ="";
        ctTsh[City::HoChiMinhCity] ="";
        ctTsh[City::HongKong] ="";
        ctTsh[City::Istanbul] ="";
        ctTsh[City::Jakarta] ="";
        ctTsh[City::Johannesburg] ="";
        ctTsh[City::Karachi] ="";
        ctTsh[City::Khartoum] ="";
        ctTsh[City::Kinshasa] ="";
        ctTsh[City::Kolkata] ="";
        ctTsh[City::Lagos] ="";
        ctTsh[City::Lima] ="";
        ctTsh[City::London] ="";
        ctTsh[City::LosAngeles] ="";
        ctTsh[City::Madrid] ="";
        ctTsh[City::Manila] ="";
        ctTsh[City::MexicoCity] ="";
        ctTsh[City::Miami] ="";
        ctTsh[City::Milan] ="";
        ctTsh[City::Montreal] ="";
        ctTsh[City::Moscow] ="";
        ctTsh[City::Mumbai] ="";
        ctTsh[City::NewYork] ="";
        ctTsh[City::Osaka] ="";
        ctTsh[City::Paris] ="";
        ctTsh[City::Riyadh] ="";
        ctTsh[City::SanFrancisco] ="";
        ctTsh[City::Santiago] ="";
        ctTsh[City::SaoPaulo] ="";
        ctTsh[City::Seoul] ="";
        ctTsh[City::Shanghai] ="";
        ctTsh[City::StPetersburg] ="";
        ctTsh[City::Sydney] ="";
        ctTsh[City::Taipei] ="";
        ctTsh[City::Tehran] ="";
        ctTsh[City::Tokyo] ="";
        ctTsh[City::Washington] ="";
    }
}


bool Board::areNeighbor(City ct1, City ct2) {
//        if (allCities[ct1][ct2]){
//            return true;
//        }
//        return false;
    return allCities[ct1][ct2];
}

std::string Board::ctToString(City ct) {
    return citiesToString[ct];
}

bool &Board::researchStation(City ct) {
    return this->gotResearchStations[ct];
}

Color Board::cityToColor(City ct) {
    return this->cityColor[ct];
}

///need to change
std::ostream &pandemic::operator<<(std::ostream &os, pandemic::Board &board) {

    if (board.isDiseaseHasBeenCured(Color::Black)){
        os<<"Black disease has been cured"<<endl;
    }
    if (board.isDiseaseHasBeenCured(Color::Yellow)){
        os<<"Yellow disease has been cured"<<endl;
    }
    if (board.isDiseaseHasBeenCured(Color::Blue)){
        os<<"Blue disease has been cured"<<endl;
    }
    if (board.isDiseaseHasBeenCured(Color::Red)){
        os<<"Red disease has been cured"<<endl;
    }
    os << endl<<"Cities and diseaseCube" << endl;
    for (auto &item :board.CtWC) {
        if (board.researchStation(item.first)){
            board.ctTsh[item.first] = board.showctd(item.first) +" RS";
        } else{
            board.ctTsh[item.first] = board.showctd(item.first);
        }
    }

    string show;
    show =show +FBLU("BLU COLOR represent cities with 0 disease cube")+"********************************************************************************************************************************************************************************************************\n"
            +FGRN("GREEN COLOR represent cities with 1  disease cube")+"*******************************************************************************************************************************************************************\n"
            +FYEL("YELLOW COLOR represent cities with 2 disease cube")"*************************************************************************************************************************************************************************\n"
            +FRED("RED COLOR represent cities with 3 or more disease cube")+"**************************************************************************************************************************************************************************\n"
            "***********************************************************************************************************************************************************************************************************************************\n"
            "***************************************,* .*         ,*,  .*  *       */***,**********************,***********************,********************************************************************************************************\n"
            "************************,*******.*,.*****,,  ***                            ******************** ,,********************************************************************************************************************************\n"
            "********************  ..,***********,,******************,                . ******************************************,,*********,*****.           .*****************,**************************************************************\n"
            "       ***/***,/  ****,, .      ***  ****/*, ,    ********/               .********************,**/.  . /*,"+board.ctTsh[City::StPetersburg]+"*,**,   *    .                                         .*****,***,,**************************************\n"
            "          .                          ., ******* , **.*****,.      ********,.** .*************"+board.ctTsh[City::Essen]+"  .  .  **** .             ..                                                              ..************************************\n"
            "          .                         ********* . ,************   **************************,      **      "+board.ctTsh[City::Milan]+"            "+board.ctTsh[City::Moscow]+"                                   "+board.ctTsh[City::Seoul]+"    ,  *     ,******************************************\n"
            "*, *********,,.               "+board.ctTsh[City::Montreal]+"********,   .*  *******************************,"+board.ctTsh[City::London]+"*,*  ,****..                                                  "+board.ctTsh[City::Beijing]+"      **********  ***"+board.ctTsh[City::Tokyo]+"*********************************\n"
            "****************         "+board.ctTsh[City::Chicago]+"          **  "+board.ctTsh[City::NewYork]+"***************************..,* *****."+board.ctTsh[City::Paris]+"  ..                   .    "+board.ctTsh[City::Tehran]+"                             *.,*******. .**********************************************\n"
            "**********"+board.ctTsh[City::SanFrancisco]+"                              **/*,,************************"+board.ctTsh[City::Madrid]+" .       .          .                        .  .  ,.   ."+board.ctTsh[City::Shanghai]+"             *"+board.ctTsh[City::Osaka]+"***********************************************\n"
            "********************                  , .**"+board.ctTsh[City::Washington]+",*,*******************************/    .. "+board.ctTsh[City::Istanbul]+"    ***,     .**    .           .                             ,**,******,********************************************************\n"
            "********************                      ,*     *********************************/.     **,** .**..  .*,*****  , *** .    . .                 , .          ..,****,*************************************************************\n"
            "********************.              "+board.ctTsh[City::Atlanta]+"    */,*************************/********,,   ******** ***.**         .  ,**,.    ..                           ****,*,***, *************************************************************\n"
            "*******************"+board.ctTsh[City::LosAngeles]+"               .***************************************  ,    . **************  "+board.ctTsh[City::Baghdad]+"        , .  .                   "+board.ctTsh[City::Taipei]+"****,.*/***********************************************************\n"
            "************************ ,    .     .. **, ***************************************          ,             ,      .*        . "+board.ctTsh[City::Delhi]+" .    "+board.ctTsh[City::Kolkata]+"          ,***********************************************************************\n"
            "************************** *      ******"+board.ctTsh[City::Miami]+"********************************* .,.   "+board.ctTsh[City::Algiers]+"             ,.       .***                ,          "+board.ctTsh[City::HongKong]+" ,************************************************************************\n"
            ".*****************************    *********, *,*******************************              .    .   ......**           "+board.ctTsh[City::Karachi]+"*          ,,,           ,*******************************************************************\n"
            "*****************************"+board.ctTsh[City::MexicoCity]+"*********.,**************************                   "+board.ctTsh[City::Cairo]+"    /,   "+board.ctTsh[City::Riyadh]+"*******      ******"+ board.ctTsh[City::Bangkok]+"******* *********************************************************************\n"
            "**************************************... ************************************.        .  .   .    .       . .,  ,********"+board.ctTsh[City::Mumbai]+"   **********  ..  ******,.***********/************************************************************\n"
            "***************************************** ****  *  . ,**************************.   .. .      ..                   **************  **********,**, ********/*********************"+board.ctTsh[City::Manila]+"*****************************************\n"
            "*********************************************     .     **,***********************      **              "+board.ctTsh[City::Khartoum]+",***********"+board.ctTsh[City::Chennai]+"******,,.********/*,*.,**,********************,********************************************\n"
            "*******************************************"+board.ctTsh[City::Bogota]+" . .   .   *********************************,.. "+board.ctTsh[City::Lagos]+"         ,     ***************************** * ****    ,************************************************************************\n"
            "*******************************************.   ,..          *  ,***************************** .               ,******************************/. ***    *. ***,/./* *,****************************************************\n"
            "*******************************************    .                    ***********************"+board.ctTsh[City::Kinshasa]+"      .    ,**************************"+board.ctTsh[City::Jakarta]+"**.*****************    .,.*********************************************************\n"
            "*********************************************   .  .                ***************************    .     .   *******************************************,***********,,** .*****/***********************************************************\n"
            "******************************************"+board.ctTsh[City::Lima]+"       .           ****************************           ..  ****. *****************************************.*    **, ***********************************************************\n"
            "*************************************************.                ****************************    .,..   . ****.  ***************************************,             *****************.********************************\n"
            "************************************************* ...   ."+board.ctTsh[City::SaoPaulo]+"****************************"+board.ctTsh[City::Johannesburg]+" *****************************************                  ****************************************************\n"
            "*************************************************            **********************************,  .      ********************************************,                     **********************************************************\n"
            "************************************************.     "+board.ctTsh[City::BuenosAires]+"*********************************       **********************************************                     ********************************************************\n"
            "**********************************************"+board.ctTsh[City::Santiago]+".  ***************************************.  ,*************************************************  .******** .       ***********************************************\n"
            "***********************************************         ***********************************************************************************************************"+board.ctTsh[City::Sydney]+"************ ,****************************************\n"
            "************************************************    ******************************************************************************************************************* ************* ********************************\n"
            "***********************************************.  ,*******************************************************************************************************************************. **********************************\n"
            "***********************************************   ********************************************************************************************************************************************************************\n"
            "************************************************  .*******************************************************************************************************************************************************************\n"
            "**********************************************************************************************************************************************************************************************************************\n"
            "**********************************************************************************************************************************************************************************************************************\n"
            "**********************************************************************************************************************************************************************************************************************\n"
            "**********************************************************************************************************************************************************************************************************************\n"
            "***************************************************************************************************************************************************************************************************************************************\n";
    return os<<show<<endl;
}

std::string Board::showctd(City ct) {
    int temp = this->diseaseCube[ct];
    string city = this->CtWC[ct];
    string colorCT;
    if (temp <= 0) {
        colorCT = KBLU + city + RST;
    }
    if (temp == 1) {
        colorCT = KGRN + city + RST;
    }
    if (temp == 2) {
        colorCT = KYEL + city + RST;
    }
    if (temp >= 3) {
        colorCT = KRED+ city + RST;
    }
    return colorCT;
}










