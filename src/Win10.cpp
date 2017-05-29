#include "Win10.h"
namespace ComputerBattle{
    Win10::Win10()
    {
        Computer::setSymbol("10");
        Computer::setCost(150);
        Computer::setName("Windows 10");
    }

    Win10::~Win10()
    {
        //dtor
    }
}
