#include "ComputerBattle.h"
namespace BattleShips{
    ComputerBattle::ComputerBattle()
    {
    };

    ComputerBattle::~ComputerBattle()
    {
    };

    void ComputerBattle::generateComputerPlayer(){
        ComPlay tempPlayer;
            std::cout << "[DEBUGGING]: Generate Computer" << std::endl;
            Map map;
            std::vector<Computer>computerPark = tempPlayer.getComputerPark();

            for (int i = 0; i < computerPark.size(); i++){
                    int x = computerPark[i].getXPosition();
                    int y = computerPark[i].getYPosition();
                    std::string value = computerPark[i].print();
                    map.insertValue(x,y,value);
            }
            map.draw();
            players.push_back(tempPlayer);
        };

    void ComputerBattle::createHumanPlayer(){
            while(players.size() != 2){
                Player tempPlayer;
                std::cout << "Playername?" << std::endl;
                std::string name;
                std::cin >> name;
                system("CLS");
                tempPlayer.setName(name);
                while(tempPlayer.getMoney()>=25){

                    std::cout << "Welcome " << tempPlayer.getName() << " to the shop you have $" << tempPlayer.getMoney() << std:: endl;
                    visual.shop();
                    int computerType;
                    std::cin >> computerType;
                    system("CLS");

                    Map map;
                    std::vector<Computer>computerPark = tempPlayer.getComputerPark();
                    for (int i = 0; i <computerPark.size(); i++){
                            int x = computerPark[i].getXPosition();
                            int y = computerPark[i].getYPosition();
                            std::string value = computerPark[i].print();
                            map.insertValue(x,y,value);
                    }
                    map.draw();
                    std::cout << "Where is it needed to placed? (A5)";
                    std::vector<int>pos = reader.Positions();
                    int x = pos[0];
                    int y = pos[1];

                    switch(computerType){
                        case 1: {
                            Win95 comp;
                            comp.setPosition(x,y);
                            tempPlayer.payment(comp.getCost());
                            tempPlayer.addComputer(comp);
                            }break;
                        case 2:{
                            WinXp comp;
                            comp.setPosition(x,y);
                            tempPlayer.payment(comp.getCost());
                            tempPlayer.addComputer(comp);
                            }break;
                        case 3:{
                            Win7 comp;
                            comp.setPosition(x,y);
                            tempPlayer.payment(comp.getCost());
                            tempPlayer.addComputer(comp);
                            }break;
                        case 4:{
                            Win10 comp;
                            comp.setPosition(x,y);
                            tempPlayer.payment(comp.getCost());
                            tempPlayer.addComputer(comp);
                            }break;
                        case 5:{
                            Debian comp;
                            comp.setPosition(x,y);
                            tempPlayer.payment(comp.getCost());
                            tempPlayer.addComputer(comp);
                            }break;
                        default:
                            break;
                        }

                    system("CLS");
                }
            players.push_back(tempPlayer);
        }
    }

    std::string ComputerBattle::play(){
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
            std::cout << players[playerID].getName() << " it's you're turn" << std::endl;
            std::cout << "To which computer you want to send the virus" << std::endl;
            players[playerID].printAllActiveComputers();

            std::vector<Shot>shots = players[playerID].getShots();

            Map map;
            for (int i = 0; i < tempComputerPark.size(); i++){
                    int x = tempComputerPark[i].getXPosition();
                    int y = tempComputerPark[i].getYPosition();
                    std::string value = tempComputerPark[i].print();
                    map.insertValue(x,y,value);
            }

            for (int i = 0; i < shots.size(); i++){
                    int x = shots[i].getXPosition();
                    int y = shots[i].getYPosition();
                    std::string value = shots[i].print();
                    map.insertValue(x,y,value);
            }

            map.draw();
            std::cout << "Coordinates(A1)?: ";
            std::vector<int>pos = reader.Positions();
            int x = pos[0];
            int y = pos[1];

            for(int i = 0; i <tempComputerPark.size(); i++){
                if (tempComputerPark[i].getXPosition() == x &&
                    tempComputerPark[i].getYPosition() == y){
                        visual.computerDown(tempComputerPark[i].getName());
                        tempComputerPark[i].setStatus(false);
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
                  Shot tempShot(x,y);
                  players[playerID].addShot(tempShot);
                  currentPlayer1 = !currentPlayer1;
                }

            if (players[oPlayerID].death()== true){
                return players[playerID].getName();
            }

            system("PAUSE");
            system("CLS");

        }
    }
}
