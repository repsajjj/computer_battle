#pragma once
#include <iostream>
#include <vector>

namespace BattleShips{
    class Reader
    {
        public:
            Reader();
            virtual ~Reader();
            std::vector<int>Positions();

        protected:

        private:
    };
}

