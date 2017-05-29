#include "Debian.h"
namespace ComputerBattle{
    Debian::Debian()
    {
        setSymbol("DE");
        setCost(300);
        setName("Debian 8");
        setWidth(3);
    }

    Debian::~Debian()
    {
        //dtor
    }
}
