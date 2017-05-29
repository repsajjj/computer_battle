#include "Map.h"
#include <iostream>
#include <iomanip>
#include <string>

namespace ComputerBattle{
    Map::Map(){
        for(int i = 0; i < 10; i++){
            for (int j = 0; j <10; j++){
                drawArray[i][j] = "??";
            }
        }
     }
     void Map::insertValue(int x, int y, std::string value){
        drawArray[x][y] = value;
     }

    void Map::draw(){
        int row = 10;
        int col = 9;

        char a = 'A';

        for(int i = 0; i <= col; i++) {
            std::cout << std::setw(6) << a;
            a++;
        }
        std::cout << std::endl;
        for (int j = 0; j <= col; j++){
             std::cout << "------" ;

            }
        std::cout << std::endl;

        for (int i = 0; i <row; i++){
            std::cout << std::setw(2) << i+1 ;
            for (int j = 0; j <= col; j++){
                std::cout << std::setw(4) << drawArray[i][j] << " |" ;
               }
            std::cout << std::endl;
            for (int j = 0; j <= col; j++){
                std::cout << "------" ;

            }
            std::cout << std::endl;
        }
    }

};
