#include "Shot.h"

namespace BattleShips{

    Shot::Shot(int xT, int yT)
    {
        x = xT;
        y = yT;
        position.push_back(x);
        position.push_back(y);
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

    void Shot::setName(std::string aName){
        name = aName;
    }

    std::string Shot::getName(){
        return name;
    }

    std::string Shot::print(){
        return "**";
    }

    std::vector<int> Shot::getPosition(){
        return position;
    }
}
