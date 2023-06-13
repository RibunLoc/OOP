#pragma once
#include "Monster.h"
#include <io.h>
#include <fcntl.h>
using namespace std;

// Lớp Nhân vật
class Player :public Character
{
protected:
    wstring name;
    wstring mon;
    float atk2;
    wstring he;
    float hp = 100.0;
    float exp = 100;

public:
    void Nhap();
    Player()
    {
        Nhap();
        atk();
    }
    void Xuat();
    float atk()
    {
        hp = level * 100;
        float t = (float) level;
        t *= 5.0;
        atk2 = t;
        return t;
    }
};
