#pragma once
#include <string>

namespace BattleShips{
    class Computer
    {
        public:
            Computer();

        private:
            int x;
            int y;
            int cost;
            int width;
            bool status;
            std::string name;
            std::string symbol;

        public:
            int getCost();
            bool getStatus();
            int getWidth();
            int getXPosition();
            int getYPosition();
            void setCost(int aCost);
            void setWidth(int aWidth);
            void setStatus(bool aStatus);
            void setPosition(int x1,int y1);
            void setName(std::string aName);
            void setSymbol(std::string aSymbol);
            std::string getName();
            std::string getSymbol();
            std::string print();
    };
};

