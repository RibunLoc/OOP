#pragma once
#pragma once
#include "Element.h"

using namespace std;

// Thổ
class Tho :public Element
{
protected:
public:
    Tho()
    {
        he = 'o';
    }

    int attack(Element* m)
    {
        if (m->He() == 'k')
            return 10;
        if (m->He() == 't')
            return 20;
        if (m->He() == 'm')
            return -20;
        return 0;
    }

};
