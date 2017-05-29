#include "player.h"
#include "map.h"

namespace BattleShips{
    Player::Player()
    {
        money = 500;
    }

    void Player::setName(std::string aName){
        name = aName;
    }

    std::string Player::getName(){
        return name;
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
        for(int i = 0 ; i < computerPark.size(); i++){
            computerPark[i].setStatus(status);
        }
    }

    bool Player::death(){
        bool death = true;
          for(int i = 0 ; i < computerPark.size(); i++){
            if (computerPark[i].getStatus()==true){
                death = false;
                break;
            }
        }
        return death;
    }

    void Player::printAllActiveComputers(){
        std::cout << "Current running computers:" << std::endl;
          for(int i = 0 ; i < computerPark.size(); i++){
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
        for(int i = 0; i <computerPark.size(); i++){
            if (computerPark[i].getXPosition() == x &&
                computerPark[i].getYPosition() == y &&
                computerPark[i].getStatus() == false ){
                     return false;
            }
        }
         return true;
    }

    bool Player::nDubbleShot(int x, int y){
        for(int i = 0; i <shots.size(); i++){
            if (shots[i].getXPosition() == x &&
                 shots[i].getYPosition() == y){
                        return false;
            }
        }
        return true;
    }

    std::vector<std::vector <int>> Player::getAllPositions(){
        std::vector<std::vector <int>> temp;
        for(int i = 0; i <shots.size(); i++){
            temp.push_back(shots[i].getPosition());
            }
        return temp;
    }

}

