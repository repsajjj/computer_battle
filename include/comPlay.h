#pragma once
#include "player.h"
#include "Math.h"
#include <chrono>
#include <thread>
#include <windows.h>

namespace ComputerBattle{
    class ComPlay: public Player
    {
        public:
            ComPlay(std::string name);
            virtual ~ComPlay();
    };
}

