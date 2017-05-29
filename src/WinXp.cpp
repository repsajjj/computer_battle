#include "WinXp.h"
namespace ComputerBattle{
    WinXp::WinXp()
    {
        Computer::setSymbol("XP");
        Computer::setCost(50);
        Computer::setName("Windows XP");
    }

    WinXp::~WinXp()
    {
        //dtor
    }
}
