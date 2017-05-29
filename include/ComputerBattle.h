#pragma once
#include <vector>
#include "player.h"
#include "humPlay.h"
#include "comPlay.h"
#include "map.h"
#include <stdlib.h>
#include "Visual.h"
#include "Reader.h"
#include "math.h"
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


        private:
            std::vector<Player> players;
            Visual visual;
            Reader reader;
    };
}


