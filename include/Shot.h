#ifndef SHOT_H
#define SHOT_H
#include <string>

namespace BattleShips{
    class Shot
    {
        public:
            Shot(int xT, int yT);
            virtual ~Shot();
            int getXPosition();
            int getYPosition();
            std::string print();

        protected:

        private:
            int x;
            int y;

    };
}

#endif // SHOT_H
