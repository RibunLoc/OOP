#include "Monster.h"
#include "Kim.h"
#include "Moc.h"
#include "Thuy.h"
#include "Hoa.h"
#include "Tho.h"
	
using namespace std;
void Monster::Nhap()
{
	wcout << L"Nhập cấp độ của quái: ";
	wcin >> level;
	wcout << L"Nhập hệ của quái trong ngũ hành: " << endl;
	wcout << L"\t1. Kim\n";
	wcout << L"\t2. Mộc\n";
	wcout << L"\t3. Thuỷ\n";
	wcout << L"\t4. Hoả\n";
	wcout << L"\t5. Thổ\n";

	int t; cin >> t;
	switch (t)
	{
	case 1:
		mp = new Kim();
		break;
	case 2:
		mp = new Moc();
		break;
	case 3:
		mp = new Thuy();
		break;
	case 4:
		mp = new Hoa();
		break;
	case 5:
		mp = new Tho();
		break;
	}
}
