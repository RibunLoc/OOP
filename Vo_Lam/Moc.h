#pragma once
#pragma once
#include "Element.h"

using namespace std;

// Mộc
class Moc :public Element
{
protected:
public:
    Moc()
    {
        he = 'm';
    }

    int attack(Element* m)
    {
        if (m->He() == 'h')
            return 10;
        if (m->He() == 'o')
            return 20;
        if (m->He() == 'k')
            return -20;
        return 0;
    }

};
