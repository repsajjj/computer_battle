#include <string>
namespace BattleShips{
    class Tank
    {
        public:
            Tank();

            std::string toString();
            void setPosition(int x1,int y);
            int getXPosition();
            int getYPosition();

        protected:

        private:
            bool status = true;
            int ammo;
            int range;
            int sizeT;
            int x;
            int y;

    };

}
