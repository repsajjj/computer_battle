#pragma once
#include <iostream>
#include <iomanip>
#include <string>

namespace ComputerBattle{
    class Map
    {
        public:
            Map();
            void draw();
            void insertValue(int x, int y, std::string value);

        private:
            std::string drawArray[10][10];
    };
};


