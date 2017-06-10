#include "player.h"

namespace ComputerBattle{
    Player::Player()
    {
        money = 500;
    }

    void Player::setName(std::string aName){
        name = aName;
    }

    void Player::setType(std::string aType){
        type = aType;
    }


    std::string Player::getName(){
        return name;
    }

    std::string Player::getType(){
        return type;
    }

    void Player::payment(int aMoney){
        money = money - aMoney;
    }

    int Player::getMoney(){
        return money;
    }

    void Player::addComputer(Computer aComputer){
        computerPark.push_back(aComputer);
    }

    void Player::addShot(Shot aShot){
        shots.push_back(aShot);
    }

    void Player::visbility(bool bStatus){
        int status;
        if (bStatus == true){ status = false;} else status = true;
        for(unsigned int i = 0 ; i < computerPark.size(); i++){
            computerPark[i].setStatus(status);
        }
    }

    bool Player::death(){
        bool death = true;
          for(unsigned int i = 0 ; i < computerPark.size(); i++){
            if (computerPark[i].getStatus()==true){
                death = false;
                break;
            }
        }
        return death;
    }

    void Player::printAllActiveComputers(){
        std::cout << "Current running computers:" << std::endl;
          for(unsigned int i = 0 ; i < computerPark.size(); i++){
            if (computerPark[i].getStatus()==1){
                char y = computerPark[i].getYPosition() + 65;
                int x = computerPark[i].getXPosition() + 1;
                std::cout<< "* " <<"["<< y << "]" <<"["<< x << "]   "  <<computerPark[i].getName() << std::endl;
            }
        }
    }

    std::vector<Computer> Player::getComputerPark(){
        return computerPark;
    }

    std::vector<Shot> Player::getShots(){
        return shots;
    }

    void Player::setComputerPark(std::vector<Computer> aComputerPark ){
        computerPark = aComputerPark;
    }

    bool Player::nDubbleComp(int x, int y){
        for(unsigned int i = 0; i <computerPark.size(); i++){
            if (computerPark[i].getXPosition() == x &&
                computerPark[i].getYPosition() == y &&
                computerPark[i].getStatus() == false ){
                     return false;
            }
        }
         return true;
    }

    bool Player::nDubbleShot(int x, int y){
        for(unsigned int i = 0; i <shots.size(); i++){
            if (shots[i].getXPosition() == x &&
                 shots[i].getYPosition() == y){
                        return false;
            }
        }
        return true;
    }

    std::vector<std::vector <int>> Player::getAllPositions(){
        std::vector<std::vector <int>> temp;
        for(unsigned int i = 0; i <shots.size(); i++){
            temp.push_back(shots[i].getPosition());
            }
        return temp;
    }

    void Player::createComputer(int x, int y, int aType){
        if (aType == 0)return;
        std::vector<Computer>tempAllUComputers;
        Win95 win95;
        WinXp winXp;
        Win7 win7;
        Win10 win10;
        Debian debian;
        tempAllUComputers.push_back(win95);
        tempAllUComputers.push_back(winXp);
        tempAllUComputers.push_back(win7);
        tempAllUComputers.push_back(win10);
        tempAllUComputers.push_back(debian);

        Computer comp = tempAllUComputers[(aType-1)];
        if (comp.getCost()> getMoney()){
            if (type == "Human"){
                    std::cout << "You have not enough money for this computer" << std::endl;
                    system("PAUSE");
            }
                return;
        }

        if (comp.getWidth()-1+y>9){
           if (type == "Human"){
               std::cout << "This location is invalid: You can't place a computer outside the map" << std::endl;
               system("PAUSE");
            }
            return;
        }

        for(unsigned int i = 0; i < computerPark.size(); i++){
            for (int j = 0; j < comp.getWidth(); j++){
                if(computerPark[i].getXPosition()== x && computerPark[i].getYPosition()== y+j ){
                    if (type == "Human"){
                        std::cout << "This location is invalid: You can't set a computer above another one" << std::endl;
                        system("PAUSE");
                    }
                    return;
                }
            }
        }

        payment(comp.getCost());
        comp.setPosition(x,y);
        addComputer(comp);

        for(int i = 1; i<comp.getWidth();i++){
            Computer compT = tempAllUComputers[aType-1];
            compT.setPosition(x,y+i);
            addComputer(compT);
        }
    }
}
