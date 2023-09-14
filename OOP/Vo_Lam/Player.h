#pragma once
#include "Monster.h"
using namespace std;

// Lớp Nhân vật
class Player :public Character
{
protected:
    wstring name;
    wstring he;
    wstring mon;
    float exp2;
public:
    void Nhap();
    Player();
    Player(int t);
    void Xuat();
    void XuatGame();
    float atk();
    void NhanSatThuong(float t);
    void TangCap();
};
