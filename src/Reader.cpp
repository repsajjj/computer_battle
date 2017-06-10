#include "Reader.h"
namespace ComputerBattle{
    Reader::Reader()
    {
        //ctor
    }

    Reader::~Reader()
    {
        //dtor
    }
    std::vector<int> Reader::Positions(){
        char yT;
        int xT;
        std::cin >>  yT >> xT;
        int y = yT-65;
        int x = xT-1;
        std::vector<int>temp;
        temp.push_back(x);
        temp.push_back(y);
        return temp;
    }
}
