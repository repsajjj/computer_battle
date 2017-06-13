#include "Computer.h"
namespace ComputerBattle {
Computer::Computer() {
    status = false;
}

void Computer::setPosition(int x1,int y1) {
    x = x1;
    y = y1;
}

void Computer::setCost(int aCost) {
    cost = aCost;
}

void Computer::setSymbol(std::string aSymbol) {
    symbol = aSymbol;
}

int Computer::getXPosition() {
    return x;
}

int Computer::getYPosition() {
    return y;
}

std::string Computer::getSymbol() {
    return symbol;
}

int Computer::getCost() {
    return cost;
}

std::string Computer::print() {
    if (status == false) {
        return symbol;
    } else return "??";
}

void Computer::setStatus(bool aStatus) {
    status = aStatus;
}

bool Computer::getStatus() {
    return status;
}

void Computer::setName(std::string aName) {
    name = aName;
}

std::string Computer::getName() {
    return name;
}

void Computer::setWidth(int aWidth) {
    width = aWidth;
}

int Computer::getWidth() {
    return width;
}

}
