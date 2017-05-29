#pragma once
#include <string>
#include "computer.h"
#include "Shot.h"
#include <vector>

namespace BattleShips{
    class Player
    {
        public:
            Player();
            bool death();
            int getMoney();
            void payment(int aMoney);
            void addShot (Shot aShot);
            void visbility(bool status);
            void printAllActiveComputers();
            void setName(std::string Aname);
            bool nDubbleComp(int x, int y);
            bool nDubbleShot(int x, int y);
            void addComputer(Computer aComputer);
            void setComputerPark(std::vector<Computer>aComputerPark);
            std::string getName();
            std::vector<Shot> getShots();
            std::vector<Computer> getComputerPark();


        protected:
            std::vector<Computer> computerPark;

        private:
            int money;
            std::string name;
            std::vector<Shot> shots;
    };
};