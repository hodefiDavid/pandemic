#include <iostream>
#include "sources/Board.hpp"
#include "sources/City.hpp"
#include "sources/Color.hpp"

#include "sources/OperationsExpert.hpp"
#include "sources/Dispatcher.hpp"

using namespace pandemic;
using namespace std;
int main() {
    Board b;
    Dispatcher dsp (b,City::Atlanta);
    dsp.take_card(City::Chennai);
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
