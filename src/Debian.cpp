#include "Debian.h"
namespace BattleShips{
    Debian::Debian()
    {
        Computer::setSymbol("DE");
        Computer::setCost(300);
        Computer::setName("Debian 8");
    }

    Debian::~Debian()
    {
        //dtor
    }
}
