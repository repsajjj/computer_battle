#include "ComPlay.h"
#include <iostream>
#include <stdlib.h>
#include "Win95.h"
#include "WinXP.h"
#include "Win7.h"
#include "Win10.h"
#include "Debian.h"
#include <chrono>
#include <thread>
#include <time.h>


namespace BattleShips{

    ComPlay::ComPlay()
    {
        Player::setName("Computer");
        std::vector<int>types;
        std::cout << "ComputerPlayer is thinking ..." << std::endl;

        while (Player::getMoney() >= 25){
            srand((unsigned)time(NULL));
            int type = rand() % 5+1;
            int x = rand() % 9;
            int y = rand() % 9;
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
}