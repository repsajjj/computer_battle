#pragma once
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

namespace ComputerBattle{
    class Visual
    {
        public:
            Visual();
            virtual ~Visual();
            void welcome();
            void shop();
            void center();
            void choosePlayers();
            void endGame(std::string name);
            void computerDown(std::string name, int width);
    };
}

