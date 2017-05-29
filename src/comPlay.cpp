#include "ComPlay.h"

namespace BattleShips{

    ComPlay::ComPlay()
    {
        Player::setName("Computer");
        std::vector<int>types;
        std::cout << "ComputerPlayer is thinking ..." << std::endl;

        while (Player::getMoney() >= 25){
            Math *math = new Math();
            int type = math->getRandom(6);
            int x = math->getRandom(9);
            int y = math->getRandom(9);
            delete math;
            for(int i = 0; i > computerPark.size(); i++){
                if(computerPark[i].getXPosition()== x && computerPark[i].getYPosition()== y ){
                    type = 0;
                }
            }
            switch(type){
                case 1: {
                    Win95 comp;
                    if (comp.getCost()> Player::getMoney()){
                        break;
                    }
                    payment(comp.getCost());
                    comp.setPosition(x,y);
                    addComputer(comp);

                    }break;
                case 2:{
                    WinXp comp;
                    if (comp.getCost()> Player::getMoney()){
                        break;
                    }
                    payment(comp.getCost());
                    comp.setPosition(x,y);
                    addComputer(comp);
                    }break;
                case 3:{
                    Win7 comp;
                    if (comp.getCost()> Player::getMoney()){
                        break;
                    }
                    payment(comp.getCost());
                    comp.setPosition(x,y);
                    addComputer(comp);

                    }break;
                case 4:{
                    Win10 comp;
                    if (comp.getCost()> Player::getMoney()){
                        break;
                    }
                    payment(comp.getCost());
                    comp.setPosition(x,y);
                    addComputer(comp);
                    }break;
                case 5:{
                    Debian comp;
                    if (comp.getCost()> Player::getMoney()){
                        break;
                    }
                    payment(comp.getCost());
                    comp.setPosition(x,y);
                    addComputer(comp);
                    }break;
                default:

                    break;
                }
           std::this_thread::sleep_for(std::chrono::seconds(1));
        }

    }

    ComPlay::~ComPlay()
    {
        //dtor
    }

    void Player::shoot(){
    }
}
