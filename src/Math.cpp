#include "Math.h"

namespace ComputerBattle {
Math::Math() {
    srand((unsigned)time(NULL));
}

Math::~Math() {
    //dtor
}

std::vector<int> Math::getRandomPos2(std::vector<std::vector<int>> positions) {

start_rnd:
    int x = rand()%10;
    int y = rand()%10;

    for (unsigned int i = 0; i < positions.size(); i++) {
        if (x == positions[i][0] && y == positions[i][1]) {
            goto start_rnd;
        }
    }
    std::vector<int> temp;
    temp.push_back(x);
    temp.push_back(y);
    return temp;

}

int Math::getRandom(int value) {
    return rand() % value+1;
}
}
