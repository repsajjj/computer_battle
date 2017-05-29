#pragma once
#include "vector"
#include <time.h>
#include <stdlib.h>


namespace BattleShips{
class Math
{
    public:
        Math();
        virtual ~Math();
        std::vector<int> getRandomPos2(std::vector<std::vector<int>> positions);
        int getRandom(int value);

    protected:

    private:
};
}


