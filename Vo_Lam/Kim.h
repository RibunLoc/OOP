#pragma once
#pragma once
#include "Element.h"

using namespace std;

// Kim
class Kim :public Element
{
protected:
public:
    Kim()
    {
        he = 'k';
    }
    int attack(Element* m)
    {
        if (m->He() == 't')
            return 10;
        if (m->He() == 'm')
            return 20;
        if (m->He() == 'h')
            return -20;
        return 0;
    }

};
