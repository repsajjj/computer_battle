#include "humPlay.h"
namespace BattleShips{
    HumPlay::HumPlay()
    {
        std::cout << "Playername?" << std::endl;
                std::string name;
                std::cin >> name;
                system("CLS");
                setName(name);
                while(getMoney()>=25){
                    std::cout << "Welcome " << getName() << " to the shop you have $" << getMoney() << std:: endl;
                    Visual *visual = new Visual();
                    visual->shop();
                    delete visual;
                    int computerType;
                    std::cin >> computerType;
                    system("CLS");

                    Map *map = new Map();
                    for (int i = 0; i <computerPark.size(); i++){
                            int x = computerPark[i].getXPosition();
                            int y = computerPark[i].getYPosition();
                            std::string value = computerPark[i].print();
                            map->insertValue(x,y,value);
                    }
                    map->draw();
                    delete map;
                    std::cout << "Where is it needed to placed? (A5)";
                    Reader *reader = new Reader();
                    std::vector<int>pos = reader->Positions();
                    delete reader;
                    int x = pos[0];
                    int y = pos[1];

                    switch(computerType){
                        case 1: {
                            Win95 comp;
                            comp.setPosition(x,y);
                            payment(comp.getCost());
                            addComputer(comp);
                            }break;
                        case 2:{
                            WinXp comp;
                            comp.setPosition(x,y);
                            payment(comp.getCost());
                            addComputer(comp);
                            }break;
                        case 3:{
                            Win7 comp;
                            comp.setPosition(x,y);
                            payment(comp.getCost());
                            addComputer(comp);
                            }break;
                        case 4:{
                            Win10 comp;
                            comp.setPosition(x,y);
                            payment(comp.getCost());
                            addComputer(comp);
                            }break;
                        case 5:{
                            Debian comp;
                            comp.setPosition(x,y);
                            payment(comp.getCost());
                            addComputer(comp);
                            }break;
                        default:
                            break;
                        }
                    system("CLS");                }
    }

    HumPlay::~HumPlay()
    {
        //dtor
    }

}
