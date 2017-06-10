#include "ComPlay.h"

namespace ComputerBattle{

    ComPlay::ComPlay(std::string name)
    {
        setType("Computer");
        setName(name);
        std::vector<int>types;
        std::cout << getName() <<" is thinking ..." << std::endl;

        while (Player::getMoney() >= 25){
            Math *math = new Math();
            int type = math->getRandom(5);
            int x = math->getRandom(9);
            int y = math->getRandom(9);
            delete math;

           createComputer(x,y,type);
           std::this_thread::sleep_for(std::chrono::milliseconds(250));
        }
    }

    ComPlay::~ComPlay()
    {
        //dtor
    }
}
