#include "ArrCharacter.h"
#include "Character.h"
#include"Player.h"


ArrCharacter::ArrCharacter()
{
	N = 0;
}
ArrCharacter::~ArrCharacter()
{
	N = 0;
}
void ArrCharacter::Nhap()
{
	
	wcout << L"Nhập số lượng N để nhập vào danh sách: ";
	wcin >> N;
	for (int i = 0; i < N; i++)
	{
		wcout << L"-----------" << i + 1 << "-----------" << endl;
		wcout << L"\t1. Người chơi:\n";
		wcout << L"\t2. Quái vật\n";
		int t; wcin >> t;
		switch (t)
		{
		case 1:
			arr[i] = new Player();
			break;
		case 2:
			arr[i] = new Monster();
			break;
		default:
				break;
		}
	}
}

void ArrCharacter::Max()
{
	wcout << endl << L"Thành phần có mức sát thương cao nhất: \n";
	float maxx = 0.0;
	for (int i = 0; i < N; i++)
		if(maxx< arr[i]->atk())
			maxx = arr[i]->atk();
	for (int i = 0; i < N; i++)
		if (maxx == arr[i]->atk())
			arr[i]->Xuat();
	wcout << endl;
}

void ArrCharacter::Xuat()
{
	system("cls");
	wcout << L"Danh sách các character đã nhập:\n";
	for (int i = 0; i < N; i++)
	{
		wcout << "----------------------" << i << "----------------------\n";
		arr[i]->Xuat();
		wcout << endl;
	}
}
