#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Element.h"

using namespace std;

// Lớp Character
class Character
{
protected:
   // wstring name;
    int level;
    Element * mp;
public:
    Character();
    ~Character();
    virtual float atk()=0;
    virtual void Nhap()=0;
    virtual void Xuat() = 0;
    float SatThuong(Character* p)
    {
        float st = atk();
        return st + st * mp->attack(p->gethe()) / 100;
    }
    Element* gethe()
    {
        return mp;
    }
};