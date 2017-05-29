#pragma once
#include <vector>
#include "Player.h"
#include "HumPlay.h"
#include "ComPlay.h"
#include "Map.h"
#include <stdlib.h>
#include "Visual.h"
#include "Reader.h"
#include "Math.h"
#include "Computer.h"

namespace ComputerBattle{
    class ComputerBattleGame
    {
        public:
            ComputerBattleGame();
            virtual ~ComputerBattleGame();
            void generateComputerPlayer();
            void createHumanPlayer();
            std::string play();


        private:
            std::vector<Player> players;
            Visual visual;
            Reader reader;
    };
}


