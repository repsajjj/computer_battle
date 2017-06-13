#include "HumPlay.h"
namespace ComputerBattle {
HumPlay::HumPlay() {
    setType("Human");
    std::cout << "What's your name?" << std::endl;
    std::string name;
    std::cin >> name;
    system("CLS");
    setName(name);
    while(getMoney()>=25) {
        std::cout << "Welcome " << getName() << " to the shop. You have $" << getMoney() << std:: endl;
        Visual *visual = new Visual();
        visual->shop();
        delete visual;
        int computerType = 6;
        while (computerType>5) {
            std::cin >> computerType;
        }
        system("CLS");

        Map *map = new Map();
        for (unsigned int i = 0; i <computerPark.size(); i++) {
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

        createComputer(x, y, computerType);
        system("CLS");
    }
}
HumPlay::~HumPlay() {
    //dtor
}

}
