#pragma once
#include "Element.h"

using namespace std;

// Thuỷ
class Thuy :public Element
{
protected:
public:
    Thuy()
    {
        he = 't';
    }

    int attack(Element* m)
    {
        if (m->He() == 'm')
            return 10;
        if (m->He() == 'h')
            return 20;
        if (m->He() == 'o')
            return -20;
        return 0;
    }

};
