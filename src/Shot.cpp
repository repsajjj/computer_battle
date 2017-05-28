#include "Shot.h"

namespace BattleShips{

    Shot::Shot(int xT, int yT)
    {
        x = xT;
        y = yT;
    }

    Shot::~Shot()
    {
        //dtor
    }

    int Shot::getXPosition(){
        return x;
    }

    int Shot::getYPosition(){
       return y;
    }

    std::string Shot::print(){
        return "**";
    }
}
