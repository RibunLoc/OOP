#pragma once
#include "Monster.h"
#include "Kim.h"
#include "Moc.h"
#include "Thuy.h"
#include "Hoa.h"
#include "Tho.h"

using namespace std;

// Lớp Quái vật thủ lĩnh
class Boss :public Monster
{
protected:
	float exp = 50;
public:
    Boss()
    {
        Nhap();
    }
    void Nhap()
    {
		wcout << L"Nhập cấp độ của quái thủ lĩnh: ";
		wcin >> level;
		wcout << L"Nhập hệ của quái trong ngũ hành: " << endl;
		wcout << L"\t1. Kim\n";
		wcout << L"\t2. Mộc\n";
		wcout << L"\t3. Thuỷ\n";
		wcout << L"\t4. Hoả\n";
		wcout << L"\t5. Thổ\n";

		int t; wcin >> t;
		switch (t)
		{
		case 1:
			mp = new Kim();
			hee = L"Kim";
			break;
		case 2:
			mp = new Moc();
			hee = L"Mộc";
			break;
		case 3:
			mp = new Thuy();
			hee = L"Thuỷ";
			break;
		case 4:
			mp = new Hoa();
			hee = L"Hoả";
			break;
		case 5:
			mp = new Tho();
			hee = L"Thổ";
			break;
		}
		atk();
    }
    void Xuat()
    {
		wcout << L"Cấp độ của quái thủ lĩnh: ";
		wcout<< level<<endl;
		wcout << L"Hệ của quái trong ngũ hành: " << hee<<endl;
		wcout << L"Mức độ sát thương " << atk2 << endl;
    }
    float atk()
    {
        float t =(float) level;
        t *= 7.0;
		exp = 50 * level;
		hp = 100 * level;
		atk2 = t;
        return t;
    }
};
