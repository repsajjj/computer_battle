#ifndef COMPUTERBATTLE_H
#define COMPUTERBATTLE_H
#include <vector>
#include "player.h"
#include "comPlay.h"
#include "map.h"
#include "Win95.h"
#include "WinXP.h"
#include "Win7.h"
#include "Win10.h"
#include "Debian.h"
#include <stdlib.h>
#include "Visual.h"
#include "Reader.h"
#include "Computer.h"

namespace BattleShips{
    class ComputerBattle
    {
        public:
            ComputerBattle();
            virtual ~ComputerBattle();
            void generateComputerPlayer();
            void createHumanPlayer();
            std::string play();

        protected:

        private:
            std::vector<Player> players;
            Visual visual;
            Reader reader;
    };
}

#endif // COMPUTERBATTLE_H
