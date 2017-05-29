#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Shot.h"
#include "Computer.h"
#include "Win95.h"
#include "WinXP.h"
#include "Win7.h"
#include "Win10.h"
#include "Debian.h"

namespace ComputerBattle{
    class Player
    {
        public:
            Player();
            bool death();
            int getMoney();
            void shoot();
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
            std::vector<std::vector <int>> getAllPositions();
            std::vector<Computer> getComputerPark();


        protected:
            std::vector<Computer> computerPark;

        private:
            int money;
            std::string name;
            std::vector<Shot> shots;
    };
};
