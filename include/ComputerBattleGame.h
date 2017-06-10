#pragma once
#include <vector>
#include <stdlib.h>
#include "Map.h"
#include "Visual.h"
#include "Reader.h"
#include "Math.h"
#include "Player.h"
#include "HumPlay.h"
#include "ComPlay.h"
#include "Computer.h"

namespace ComputerBattle{
    class ComputerBattleGame
    {
        public:
            ComputerBattleGame();
            virtual ~ComputerBattleGame();
            void generateComputerPlayer(std::string name);
            void createHumanPlayer();
            std::string play();


        private:
            std::vector<Player> players;
    };
}


