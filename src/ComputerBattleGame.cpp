#include "ComputerBattleGame.h"

namespace ComputerBattle{
    ComputerBattleGame::ComputerBattleGame()
    {
    };


    void ComputerBattleGame::generateComputerPlayer(std::string name){
            ComPlay *tempPlayer = new ComPlay(name);
            std::cout << "[DEBUGGING]: Generate Computer" << std::endl;
            Map *map = new Map();
            std::vector<Computer>computerPark = tempPlayer->getComputerPark();

            for (unsigned int i = 0; i < computerPark.size(); i++){
                    int x = computerPark[i].getXPosition();
                    int y = computerPark[i].getYPosition();
                    std::string value = computerPark[i].print();
                    map->insertValue(x,y,value);
            }
            map->draw();
            players.push_back(*tempPlayer);
            delete map;
            delete tempPlayer;
        };

    void ComputerBattleGame::createHumanPlayer(){
            while(players.size() != 2){
                HumPlay *tempPlayer = new HumPlay();
                players.push_back(*tempPlayer);
                delete tempPlayer;
            }
    }

    std::string ComputerBattleGame::play(){
        players[0].visbility(false);
        players[1].visbility(false);
        bool currentPlayer1 = true;
        bool hitTank ;
        int playerID;
        int oPlayerID;
        std::vector<Computer>tempComputerPark;

        while(true){
            hitTank = false;
            if (currentPlayer1 == true){
                    playerID=0; oPlayerID=1;
                    tempComputerPark = players[1].getComputerPark();
            }
            else {
                    playerID=1; oPlayerID=0;
                    tempComputerPark = players[0].getComputerPark();
            }
            std::cout << players[playerID].getName() << " it's your turn" << std::endl;
            std::cout << "To which computer you want to send the virus" << std::endl;
            if (players[playerID].getType() == "Human"){
                    players[playerID].printAllActiveComputers();
            }

            std::vector<Shot>shots = players[oPlayerID].getShots();

            Map *map = new Map();
            for (unsigned int i = 0; i < tempComputerPark.size(); i++){
                    int x = tempComputerPark[i].getXPosition();
                    int y = tempComputerPark[i].getYPosition();
                    std::string value = tempComputerPark[i].print();
                    map->insertValue(x,y,value);
            }

            for (unsigned int i = 0; i < shots.size(); i++){
                    int x = shots[i].getXPosition();
                    int y = shots[i].getYPosition();
                    if (shots[i].getName() == "miss"){
                        std::string value = shots[i].print();
                        map->insertValue(x,y,value);
                    }
            }
            map->draw();
            delete map;
            std::cout << "Coordinates(A1)?: ";
            std::vector<int>pos;
            Math *math = new Math();
            if ( players[playerID].getType() == "Computer"){
                    pos = math->getRandomPos2(players[oPlayerID].getAllPositions());
                    std::cout << char (pos[1]+65) << pos[0]+1 << std::endl;
                    delete math;
            }

            else {
                    Reader *reader = new Reader();
                    pos = reader->Positions();
                    delete reader;
            }
            int x = pos[0]; int y = pos[1];

            if(players[oPlayerID].nDubbleShot(x,y)&& players[oPlayerID].nDubbleComp(x,y)){
                Shot tempShot(x,y);
                for(unsigned int i = 0; i <tempComputerPark.size(); i++){
                    if (tempComputerPark[i].getXPosition() == x &&
                        tempComputerPark[i].getYPosition() == y){
                            Visual *visual = new Visual();
                            visual->computerDown(tempComputerPark[i].getName(),tempComputerPark[i].getWidth());
                            delete visual;
                            tempComputerPark[i].setStatus(false);
                            tempShot.setName("hit");
                            hitTank = true;
                    }
                }

                if (currentPlayer1 == true){
                        players[1].setComputerPark(tempComputerPark);
                }
                else {
                        players[0].setComputerPark(tempComputerPark);
                }

                if (hitTank == false){
                      tempShot.setName("miss");
                      currentPlayer1 = !currentPlayer1;
                    }
                players[oPlayerID].addShot(tempShot);

                if (players[oPlayerID].death()== true){
                    return players[playerID].getName();
                }
            }
            else std::cout << "You're already hit on this location" << std::endl;
            system("PAUSE");
            system("CLS");
        }
    }
}
