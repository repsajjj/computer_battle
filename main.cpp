#include <iostream>
#include <sstream>
#include <stdlib.h>
#include "Visual.h"
#include "Reader.h"
#include "ComputerBattleGame.h"

using namespace ComputerBattle;

int main()
{
    Visual visual2;
    Reader reader2;
    ComputerBattleGame game2;

    visual2.center();
    visual2.welcome();
    system("PAUSE");
    system("CLS");

    visual2.choosePlayers();
    int gameType;
    std::cin >> gameType;
    system("CLS");

    if (gameType == 2){
        game2.generateComputerPlayer();
        system("PAUSE");
        system("CLS");
    }

    if (gameType == 3){ //DEBUGGING TOOL
        game2.generateComputerPlayer();
        game2.generateComputerPlayer();
        system("PAUSE");
        system("CLS");
    }

    game2.createHumanPlayer();
    system("CLS");

    std::string name = game2.play();
    system("CLS");
    visual2.endGame(name);

    return 0;



}
