#include "Math.h"
#include <iostream>
namespace BattleShips{
    Math::Math()
    {
       srand((unsigned)time(NULL));
    }

    Math::~Math()
    {
        //dtor
    }

    std::vector<int> Math::getRandomPos2(std::vector<std::vector<int>> positions){

            start_rnd:
            int x = rand()%9;
            int y = rand()%9;

            for (int i = 0; i < positions.size(); i++){
                if (x == positions[i][0] && y == positions[i][1]){
                    goto start_rnd;
                }
            }
            std::vector<int> temp;
            temp.push_back(x);
            temp.push_back(y);
            return temp;

    }

    int Math::getRandom(int value){
            return rand() % value;
    }

}
