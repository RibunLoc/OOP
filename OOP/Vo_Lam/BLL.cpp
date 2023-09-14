#include "BLL.h"
#include <windows.h> 
#include "ArrCharacter.h"
#include "Character.h"
#include "Player.h"
using namespace std;
BLL::BLL(){}
BLL::~BLL(){}
void BLL::begin()
{
    int t = 0;system("cls"); // xóa màn hình đen
    wcout << " __   __   __   ______   __       ______   ________   _____  _____   ______  " << std::endl;
    wcout << "|  | |  | |  | |   ___| |  |     |   ___| |   __   | |   _ || _   | |   ___| " << std::endl;
    wcout << "|  | |  | |  | |  |___  |  |     |  |     |  |  |  | |  | |  | |  | |  |___  " << std::endl;
    wcout << "|  | |  | |  | |   ___| |  |     |  |     |  |  |  | |  | |  | |  | |   ___| " << std::endl;
    wcout << "|  |_|  |_|  | |  |___  |  |___  |  |___  |  |__|  | |  | |  | |  | |  |___  " << std::endl;
    wcout << " |____||____|  |______| |______| |______| |________| |__| |__| |__| |______| " << std::endl;
    wcout << std::endl;
    system("pause");system("cls");
    wstring s;
    s=L"Ngày xưa, yêu ma quỷ quái hoành hành khắp nơi\n\n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"Dân chúng lầm than\n\n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"Khắp giang hồ nổi dậy cùng nhau ra sức tiêu diệt yêu ma quỷ quái cứu giúp dân lành\n\n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Trong đó, nổi trội nhất với 10 môn phái thuộc 5 nguyên tố \n\n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Kim: \n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiếu Lâm \n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiên Vương bang\n\n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Mộc: \n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Ngũ Độc giáo \n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Đường Môn \n\n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Thủy: \n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Nga My \n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thúy Yên môn \n\n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Hỏa: \n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Cái Bang \n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiên Nhẫn giáo \n\n";
    for (int i = 0; i < s.size(); i++){
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Thổ: \n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Côn Lôn \n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Võ Đang \n\n";
    for (int i = 0; i < s.size(); i++) {
        wcout << s[i];
        Sleep(t);
    }
    system("pause");
    return;
}


void BLL::played()
{
    wcout << endl;
    wcout << L"  O  " << endl;
    wcout << L" /|\\ " << endl;
    wcout << L" / \\ " << endl;
}

void BLL::LMonster()
{
    wcout << endl;
    wcout << L"   _O_ " << endl;
    wcout << L" /  |  \\ " << endl;
    wcout << L"|| | | ||" << endl;
}
void BLL::Boss()
{
    wcout << endl;
    wcout << L"   \\+/ " << endl;
    wcout << L"   _O_ " << endl;
    wcout << L" /  |  \\ " << endl;
    wcout << L" | | | |" << endl;
}

void BLL::huongdan()
{
    system("cls");
    wcout << L"Hãy bắt đầu hướng dẫn này\n\n\n";
    wcout << L"Hướng dẫn 1:\n";
    ArrCharacter A;
    A.Nhap();
    A.Xuat();
    A.Max();
    A.~ArrCharacter();
    system("pause");
    system("cls");
    wcout << L"Hướng dẫn 2:\n";
    Character* H[2];
    for (int i = 0; i < 2; i++)
    {
        if (i)
            wcout << L"----------- B -----------" << endl;
        else
            wcout << L"----------- A -----------" << endl;
        wcout << L"\t1. Người chơi:\n";
        wcout << L"\t2. Quái vật\n";
        int q; wcin >> q;
        switch (q)
        {
        case 1:
            H[i] = new Player();
            break;
        case 2:
            H[i] = new Monster();
            break;
        default:
            break;
        }
    }
    system("cls");
    H[0]->Xuat();
    H[1]->Xuat();
    wcout << endl;
    wcout << L"Sát thương của A lên B là: "; wcout << H[0]->SatThuong(H[1]) << endl;
    wcout << L"Sát thương của B lên A là: "; wcout << H[1]->SatThuong(H[0]) << endl;
    system("pause");
}
