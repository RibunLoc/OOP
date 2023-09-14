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
    wstring he;
    wstring loai;
    
public:
    Monster();
    ~Monster();
    Monster(int t, int k);
    void Nhap();
    void Xuat();
    void XuatGame();
    float atk();
    void NhanSatThuong(float t);
    void TangCap() {};
};
