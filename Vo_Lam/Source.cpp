#include <iostream>
#include"BLL.h"
#include "ArrCharacter.h"
#include "Character.h"
#include "Player.h"
#include "LMonster.h"
#include "Boss.h"
#include <windows.h> 

using namespace std;

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	BLL a;
	a.begin();
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
		if(i)
			wcout << L"----------- B -----------" << endl;
		else
			wcout << L"----------- A -----------" << endl;
		wcout << L"\t1. Người chơi:\n";
		wcout << L"\t2. Quái thường\n";
		wcout << L"\t3. Quái đầu lĩnh\n";
		int t; wcin >> t;
		switch (t)
		{
		case 1:
			H[i] = new Player();
			break;
		case 2:
			H[i] = new LMonster();
			break;
		case 3:
			H[i] = new Boss();
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

	
}