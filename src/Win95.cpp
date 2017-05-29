#include "Win95.h"
namespace ComputerBattle{
    Win95::Win95()
    {
        Computer::setSymbol("95");
        Computer::setCost(25);
        Computer::setName("Windows 95");
    }

    Win95::~Win95()
    {
        //dtor
    }
}
