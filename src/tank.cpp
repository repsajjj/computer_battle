#include "Tank.h"
namespace BattleShips{

    Tank::Tank(){
        int ammo = 100;
        int range = 10;
        int sizeT = 1;
        int cost = 20;
    };

    std::string Tank::toString(){
        if (status = true){
            return "T";
        }
        if (status = false){
            return "X";
        }
    };

    void Tank::setPosition(int x1,int y1){
        x = x1;
        y = y1;
    };

    int Tank::getXPosition(){
        return x;
    };

    int Tank::getYPosition(){
        return y;
    };
}
