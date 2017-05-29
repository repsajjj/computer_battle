#pragma once
#include <iostream>

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


