#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Character.h"

using namespace std;

// Lớp Quái vật
class Monster:public Character
{
protected:
    wstring hee;
    char get;
    float atk2;
    float hp = 50;
public:
    virtual void Nhap()=0;
    virtual void Xuat() = 0;
    virtual float atk() = 0;
};
