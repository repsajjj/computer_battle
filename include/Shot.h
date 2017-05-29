#pragma once
#include <string>
#include <vector>

namespace ComputerBattle{
    class Shot
    {
        public:
            Shot(int xT, int yT);
            virtual ~Shot();
            int getXPosition();
            int getYPosition();
            std::vector<int> getPosition();
            void setName(std::string aName);
            std::string getName();
            std::string print();

        protected:

        private:
            int x;
            int y;
            std::vector<int>position;
            std::string name;

    };
}
