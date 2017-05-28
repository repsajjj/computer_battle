#include "Win7.h"
namespace BattleShips{
    Win7::Win7()
    {
        Computer::setSymbol("07");
        Computer::setCost(100);
        Computer::setName("Windows 7");
    }

    Win7::~Win7()
    {
        //dtor
    }
}
