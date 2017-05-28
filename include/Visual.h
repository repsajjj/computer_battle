#ifndef VISUAL_H
#define VISUAL_H
#include <iostream>

namespace BattleShips{
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
            void computerDown(std::string name);

        protected:

        private:
    };
}

#endif // VISUAL_H
