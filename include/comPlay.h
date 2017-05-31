#pragma once
#include "player.h"
#include "Math.h"
#include <chrono>
#include <thread>

namespace ComputerBattle{
    class ComPlay: public Player
    {
        public:
            ComPlay(std::string name);
            virtual ~ComPlay();


    };
}

