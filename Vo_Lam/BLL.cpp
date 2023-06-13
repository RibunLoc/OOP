#include "BLL.h"
#include <io.h>
#include <fcntl.h>
#include <windows.h> 
#include <string>
#include <iostream>
using namespace std;
BLL::BLL()
{
}
BLL::~BLL()
{
}
void BLL::begin()
{
    int t = 0;
    system("cls"); // xóa màn hình đen
    wcout << " __   __   __   ______   __       ______   ________   _____  _____   ______  " << std::endl;
    wcout << "|  | |  | |  | |   ___| |  |     |   ___| |   __   | |   _ || _   | |   ___| " << std::endl;
    wcout << "|  | |  | |  | |  |___  |  |     |  |     |  |  |  | |  | |  | |  | |  |___  " << std::endl;
    wcout << "|  | |  | |  | |   ___| |  |     |  |     |  |  |  | |  | |  | |  | |   ___| " << std::endl;
    wcout << "|  |_|  |_|  | |  |___  |  |___  |  |___  |  |__|  | |  | |  | |  | |  |___  " << std::endl;
    wcout << " |____||____|  |______| |______| |______| |________| |__| |__| |__| |______| " << std::endl;
    wcout << std::endl;
    system("pause");
    system("cls");
    wstring s;
    s=L"Ngày xưa, yêu ma quỷ quái hoành hành khắp nơi\n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Dân chúng lầm than\n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Khắp giang hồ nổi dậy cùng nhau ra sức tiêu diệt yêu ma quỷ quái cứu giúp dân lành\n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Trong đó, nổi trội nhất với 10 môn phái thuộc 5 nguyên tố \n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Kim: \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiếu Lâm \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiên Vương bang\n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Mộc: \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Ngũ Độc giáo \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Đường Môn \n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Thủy: \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Nga My \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thúy Yên môn \n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Hỏa: \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Cái Bang \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Thiên Nhẫn giáo \n\n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"Hệ Thổ: \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Côn Lôn \n";
    for (int i = 0; i < s.size(); i++)
    {
        wcout << s[i];
        Sleep(t);
    }
    s = L"o Võ Đang \n\n";
    for (int i = 0; i < s.size(); i++)
    {
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
