#pragma once
#include <iostream>
using namespace std;

// Hệ
class Element
{
protected:
    char he;
public:
    Element() { he = ' '; };
    ~Element() {};
    char He()
    {
        return he;
    }
    virtual int attack(Element* m) = 0;
};