#pragma once

#include "Element.h"

using namespace std;

// Hoả
class Hoa :public Element
{
protected:
public:
    Hoa()
    {
        he = 'h';
    }
    ~Hoa() {};
    int attack(Element* m)
    {
        if (m->He() == 'o')
            return 10;
        if (m->He() == 'k')
            return 20;
        if (m->He() == 't')
            return -20;
        return 0;
    }

};
