#include "ComPlay.h"
#include <windows.h>

namespace ComputerBattle{

    ComPlay::ComPlay(std::string name)
    {
        setType("Computer");
        setName(name);
        std::vector<int>types;
        std::cout << "ComputerPlayer is thinking ..." << std::endl;

        while (Player::getMoney() >= 25){
            Math *math = new Math();
            int type = math->getRandom(6);
            int x = math->getRandom(9);
            int y = math->getRandom(9);
            delete math;
            /*for(unsigned int i = 0; i > computerPark.size(); i++){
                if(computerPark[i].getXPosition()== x && computerPark[i].getYPosition()== y ){
                        for (unsigned int i = 0; i > computerPark.size(); i++)
                    type = 0;
                }
            }*/
            createComputer(x,y,type);
           std::this_thread::sleep_for(std::chrono::seconds(1));
        }

    }

    ComPlay::~ComPlay()
    {
        //dtor
    }

}
