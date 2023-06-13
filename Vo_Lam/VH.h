#pragma once

#include "Element.h"

using namespace std;

// Vô hệ
class VH :public Element
{
protected:
public:
    VH() {};
    ~VH() {};
    int attack(Element* m){return 0;}
};
