#ifndef READER_H
#define READER_H
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


#endif // READER_H
