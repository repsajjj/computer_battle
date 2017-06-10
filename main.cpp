#include <iostream>
#include <sstream>
#include <stdlib.h>
#include "Visual.h"
#include "ComputerBattleGame.h"

using namespace ComputerBattle;

int main()
{
    Visual visual;
    ComputerBattleGame game;

    visual.center();
    system("mode 640");
    system("color 02");

    visual.welcome();
    system("PAUSE");
    system("CLS");

    visual.choosePlayers();
    int gameType;
    std::cin >> gameType;
    system("CLS");

    if (gameType == 2){
        game.generateComputerPlayer("Computer");
        system("PAUSE");
        system("CLS");
    }

    if (gameType == 3){ //DEBUGGING TOOL
        game.generateComputerPlayer("Computer 1");
        game.generateComputerPlayer("Computer 2");
        system("PAUSE");
        system("CLS");
    }

    game.createHumanPlayer();
    system("CLS");

    std::string nameWinner = game.play();
    system("CLS");
    visual.endGame(nameWinner);

    system("PAUSE");

    return 0;
}
