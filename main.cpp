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
    visual.color("green");
    visual.welcome();
    visual.nextPage();

    visual.choosePlayers();
    int gameType;
    std::cin >> gameType;
    system("CLS");

    if (gameType == 2){
        game.generateComputerPlayer("Computer");

    }

    else if (gameType == 3){ //DEBUGGING TOOL
        game.generateComputerPlayer("Computer 1");
        game.generateComputerPlayer("Computer 2");
        visual.nextPage();
    }

    game.createHumanPlayer();
    system("CLS");

    std::string nameWinner = game.play();
    system("CLS");
    visual.endGame(nameWinner);

    system("PAUSE");
    return 0;
};
