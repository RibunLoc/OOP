#include "Monster.h"
#include "Kim.h"
#include "Moc.h"
#include "Thuy.h"
#include "Hoa.h"
#include "Tho.h"
using namespace std;

// Lớp Quái vật thông thường 
class LMonster :public Monster
{
protected:
	float exp=25;
public:
   
    LMonster()
    {
        Nhap();
    }
    void Nhap()
    {
		wcout << L"Nhập cấp độ của quái thông thường: ";
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
		wcout << L"Cấp độ của quái thông thường: ";
		wcout << level << endl;
		wcout << L"Hệ của quái trong ngũ hành: " << hee << endl;
		wcout << L"Mức độ sát thương " << atk2 << endl;
	}
    float atk()
    {
        float t = (float) level;
        t *= 3.0;
		exp = 25 * level;
		hp = 50 * level;
		atk2 = t;
        return t;
    }
};
