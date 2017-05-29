#pragma once
#include <iostream>

namespace ComputerBattle{
    class Visual
    {
        public:
            Visual();
            virtual ~Visual();
            void welcome();
            void shop();
            void left();
            void choosePlayers();
            void endGame(std::string name);
            void computerDown(std::string name, int width);

        protected:

        private:
    };
}

