#pragma once
#include <iostream>
#include <vector>

namespace ComputerBattle {
class Reader {
public:
    Reader();
    virtual ~Reader();
    std::vector<int>Positions();
};
};
