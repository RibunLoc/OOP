#pragma once
#include "Element.h"
#include "BLL.h"
#include <windows.h> 
#include <io.h>
#include <fcntl.h>
using namespace std;

// Lớp Character
class Character
{
protected:
    int level;
    
    Element * mp;
    float exp;
    float atk2;
    float hp;
public:
    Character();
    ~Character();
    virtual float atk()=0;
    virtual void Nhap()=0;
    virtual void Xuat() = 0;
    virtual void XuatGame() = 0;
    float SatThuong(Character* p);
    Element* gethe();
    ///////////////////////
    float HP() { return hp; };
    virtual void NhanSatThuong(float t) = 0;
    float atke() { return atk2; }
    float ex() { return exp; };
    void TangEx(float t);
    virtual void TangCap()=0;
};