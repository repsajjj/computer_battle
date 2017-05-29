#include "Visual.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>

namespace ComputerBattle{

    Visual::Visual(){

    }

    Visual::~Visual(){
        //dtor
    }

    void Visual::left(){
    //Get the window console handle(isn't the right code but works for these sample
    HWND ConsoleWindow;
    ConsoleWindow=GetForegroundWindow();

    //Getting the desktop hadle and rectangule
    HWND   hwndScreen;
    RECT   rectScreen;
    hwndScreen=GetDesktopWindow ();
    GetWindowRect(hwndScreen,&rectScreen);

    //Set windows size(see the width problem)
    SetWindowPos (ConsoleWindow,NULL,0,0,1000,500, SWP_SHOWWINDOW);

    // Get the current width and height of the console
    RECT rConsole;
    GetWindowRect (ConsoleWindow,&rConsole);
    int Width = rConsole.left = rConsole.right;
    int Height = rConsole.bottom - rConsole.top;

    //caculate the window console to center of the screen
    int ConsolePosX;
    int ConsolePosY;
    ConsolePosX = ((rectScreen.right/2.75)-Width/2 );
    ConsolePosY = ((rectScreen.top/2.75)+ 0 );
    SetWindowPos(ConsoleWindow,NULL,ConsolePosX,ConsolePosY, Width, Height, SWP_SHOWWINDOW || SWP_NOSIZE);
    }

    void Visual::welcome(){
            std::cout << " ________  ________  _____ ______   ________  ___  ___  _________  _______   ________     " << std::endl;
            std::cout << "|\\   ____\\|\\   __  \\|\\   _ \\  _   \\|\\   __  \\|\\  \\|\\  \\|\\___   ___\\\\  ___ \\ |\\   __  \\    " << std::endl;
            std::cout << "\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\ \\  \\|\\  \\ \\  \\\\\\  \\|___ \\  \\_\\ \\   __/|\\ \\  \\|\\  \\   " << std::endl;
            std::cout << " \\ \\  \\    \\ \\  \\\\\\  \\ \\  \\\\|__| \\  \\ \\   ____\\ \\  \\\\\\  \\   \\ \\  \\ \\ \\  \\_|/_\\ \\   _  _\\  " << std::endl;
            std::cout << "  \\ \\  \\____\\ \\  \\\\\\  \\ \\  \\    \\ \\  \\ \\  \\___|\\ \\  \\\\\\  \\   \\ \\  \\ \\ \\  \\_|\\ \\ \\  \\\\   \\ " << std::endl;
            std::cout << "   \\ \\_______\\ \\_______\\ \\__\\    \\ \\__\\ \\__\\    \\ \\_______\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\ " << std::endl;
            std::cout << "    \\|_______|\\|_______|\\|__|     \\|__|\\|__|     \\|_______|    \\|__|  \\|_______|\\|__|\\|__|" << std::endl;
            std::cout << "                                                                                          " << std::endl;
            std::cout << "                                                                                          " << std::endl;
            std::cout << "                                                                                          " << std::endl;
            std::cout << "              ________  ________  _________  _________  ___       _______                 " << std::endl;
            std::cout << "             |\\   __  \\|\\   __  \\|\\___   ___\\\\___   ___\\\\  \\     |\\  ___ \\                " << std::endl;
            std::cout << "             \\ \\  \\|\\ /\\ \\  \\|\\  \\|___ \\  \\_\\|___ \\  \\_\\ \\  \\    \\ \\   __/|               " << std::endl;
            std::cout << "              \\ \\   __  \\ \\   __  \\   \\ \\  \\     \\ \\  \\ \\ \\  \\    \\ \\  \\_|/__             " << std::endl;
            std::cout << "               \\ \\  \\|\\  \\ \\  \\ \\  \\   \\ \\  \\     \\ \\  \\ \\ \\  \\____\\ \\  \\_|\\ \\            " << std::endl;
            std::cout << "                \\ \\_______\\ \\__\\ \\__\\   \\ \\__\\     \\ \\__\\ \\ \\_______\\ \\_______\\           " << std::endl;
            std::cout << "                 \\|_______|\\|__|\\|__|    \\|__|      \\|__|  \\|_______|\\|_______|           " << std::endl;
            std::cout << std::endl;
    }

    void Visual::shop(){
     std::cout << " ------------------------------------------" << std::endl;
     std::cout << " |           Computer Shop                |" << std::endl;
     std::cout << " ------------------------------------------" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " | [SYM]  [NAME]       [PRICE]   [WIDTH]  |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " |   1   Windows 95      $25        3     |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " |   2   Windows XP      $50        3     |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " |   3   Windows 7       $100       2     |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " |   4   Windows 10      $150       2     |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " |   5   Debian 8        $300       1     |" << std::endl;
     std::cout << " |                                        |" << std::endl;
     std::cout << " ------------------------------------------" << std::endl;
     std::cout << "What would you like to buy (put the number)" << std::endl;
    }

    void Visual::choosePlayers(){
        std::cout << "How do you want to play the game?" << std::endl;
        std::cout << "1:  HUMAN VS HUMAN" << std::endl;
        std::cout << "2:  HUMAN VS COMPUTER" << std::endl;
    }

    void Visual::endGame(std::string name){
        std::cout << "END OF GAME " << std::endl;
        std::cout << "WINNER: "<< name << std::endl;
        std::cout << std::endl;
        std::cout << "Credits: Jasper Vercnocke";
        std::cout << std::endl;}

    void Visual::computerDown(std::string name, int width){
        std::cout << "Good job: you infected 1 computerPart" << std::endl;
        std::cout << "Details:" << std::endl;
        std::cout << "    -Type: " << name << std::endl;
        std::cout << "    -Width: " << width << std::endl;
    }
}
