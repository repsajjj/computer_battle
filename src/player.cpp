#include "player.h"
#include "Map.h"

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

    void Player::generateComputer(int x, int y, int aType){
                    switch(aType){
                case 1: {
                    Win95 *comp = new Win95();
                    if (comp->getCost()> Player::getMoney()|| comp->getWidth()+y>9){
                        if (Player::type == "Human"){std::cout << "You have not enough money for this computer or the location was invalid" << std::endl; system("PAUSE");}
                        delete comp;
                        break;
                    }
                    payment(comp->getCost());
                    comp->setPosition(x,y);
                    addComputer(*comp);
                    for(int i = 1; i<comp->getWidth();i++){
                        Win95 *compT = new Win95();
                        compT->setPosition(x,y+i);
                        addComputer(*compT);
                        delete compT;
                    }
                    delete comp;

                    }break;
                case 2:{
                    WinXp *comp = new WinXp();
                    if (comp->getCost()> Player::getMoney()|| comp->getWidth()+y>9){
                    if (Player::type == "Human"){std::cout << "You have not enough money for this computer or the location was invalid" << std::endl; system("PAUSE");}                        delete comp;
                        break;
                    }
                    payment(comp->getCost());
                    comp->setPosition(x,y);
                    addComputer(*comp);
                    for(int i = 1; i<comp->getWidth();i++){
                        WinXp *compT = new WinXp();
                        compT->setPosition(x,y+i);
                        addComputer(*compT);
                        delete compT;
                    }
                    delete comp;
                    }break;
                case 3:{
                    Win7 *comp = new Win7();
                    if (comp->getCost()> Player::getMoney()|| comp->getWidth()+y>9){
                        if (Player::type == "Human"){std::cout << "You have not enough money for this computer or the location was invalid" << std::endl; system("PAUSE");}
                        delete comp;
                        break;
                    }
                    payment(comp->getCost());
                    comp->setPosition(x,y);
                    addComputer(*comp);
                    for(int i = 1; i<comp->getWidth();i++){
                        Win7 *compT = new Win7();
                        compT->setPosition(x,y+i);
                        addComputer(*compT);
                        delete compT;
                    }
                    delete comp;

                    }break;
                case 4:{
                    Win10 *comp = new Win10();
                    if (comp->getCost()> Player::getMoney()|| comp->getWidth()+y>9){
                        if (Player::type == "Human"){std::cout << "You have not enough money for this computer or the location was invalid" << std::endl; system("PAUSE");}
                        delete comp;
                        break;
                    }
                    payment(comp->getCost());
                    comp->setPosition(x,y);
                    addComputer(*comp);
                    for(int i = 1; i<comp->getWidth();i++){
                        Win10 *compT = new Win10();
                        compT->setPosition(x,y+i);
                        addComputer(*compT);
                        delete compT;
                    }
                    delete comp;
                    }break;
                case 5:{
                    Debian *comp = new Debian();
                    if (comp->getCost()> Player::getMoney()|| comp->getWidth()+y>9){
                        if (Player::type == "Human"){std::cout << "You have not enough money for this computer or the location was invalid" << std::endl; system("PAUSE");}
                        delete comp;
                        break;
                    }
                    payment(comp->getCost());
                    comp->setPosition(x,y);
                    addComputer(*comp);
                    for(int i = 1; i<(comp->getWidth());i++){
                        Debian *compT = new Debian();
                        compT->setPosition(x,y+i);
                        addComputer(*compT);
                        delete compT;
                    }
                    delete comp;
                    }break;
                default:
                    break;
                }
        }
}
