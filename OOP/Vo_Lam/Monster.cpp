#include "Monster.h"
#include "Element.h"
	
using namespace std;
Monster::Monster()
{
	Nhap();
}
Monster::~Monster()
{

}

Monster::Monster(int t, int k)
{
	if (t == 1)
	{
		loai = L"thông thường";
		mp = new Kim();
		he = L"Kim";
		level = k;
		atk();
	}
	if (t == 2)
	{
		loai = L"thông thường";
		mp = new Moc();
		he = L"Mộc";
		level = k;
		atk();
	}
	if (t == 3)
	{
		loai = L"thông thường";
		mp = new Thuy();
		he = L"Thuỷ";
		level = k;
		atk();
	}
	if (t == 4)
	{
		loai = L"thông thường";
		mp = new Hoa();
		he = L"Hoả";
		level = k;
		atk();
	}
	if (t == 1)
	{
		loai = L"thông thường";
		mp = new Tho();
		he = L"Thổ";
		level = k;
		atk();
	}
}

void Monster::Nhap()
{
	wcout << L"Nhập loại quái vật\n";
	wcout << L"\t1. Quái vật thông thường\n";
	wcout << L"\t2. Quái vật thủ lĩnh\n";
	int t; wcin >> t;
	if (t == 1)
		loai = L"thông thường";
	else
		loai = L"thủ lĩnh";
	wcout << L"Nhập cấp độ của quái " << loai << ": ";
	wcin >> level;
	wcout << L"Nhập hệ của quái "<<loai<<L" trong ngũ hành : " << endl;
	wcout << L"\t1. Kim\n";
	wcout << L"\t2. Mộc\n";
	wcout << L"\t3. Thuỷ\n";
	wcout << L"\t4. Hoả\n";
	wcout << L"\t5. Thổ\n";
	wcin >> t;
	switch (t)
	{
	case 1:
		mp = new Kim();
		he = L"Kim";
		break;
	case 2:
		mp = new Moc();
		he = L"Mộc";
		break;
	case 3:
		mp = new Thuy();
		he = L"Thuỷ";
		break;
	case 4:
		mp = new Hoa();
		he = L"Hoả";
		break;
	case 5:
		mp = new Tho();
		he = L"Thổ";
		break;
	}
	atk();
	return;
}

void Monster::Xuat()
{
	wcout << L"Cấp độ của quái " << loai << L": ";
	wcout << level << endl;
	wcout << L"Hệ của quái trong ngũ hành: " << he << endl;
	wcout << L"Mức độ sát thương " << atk2 << endl;
}

void Monster::XuatGame()
{
	wcout << endl;
	if (he == L"Hoả")
	{
		wcout << L"\033[30m          \033[37m Quai vat"  << L"\t\t\tHệ: " << he << endl;
		wcout << L"\033[31m   _O_    \033[37m Cấp : " << level << L"\t\t\tLoại :" << loai << endl;
		wcout << L"\033[31m /  |  \\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm khi tiêu diệt " << exp << endl;
		wcout << L"\033[31m|| | | || \033[37m " << endl;
		wcout << L"\033[37m          \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Kim")
	{
		wcout << L"\033[30m          \033[37m Quai vat" << L"\t\t\tHệ: " << he << endl;
		wcout << L"\033[33m   _O_    \033[37m Cấp : " << level << L"\t\t\tLoại :" << loai << endl;
		wcout << L"\033[33m /  |  \\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm khi tiêu diệt " << exp << endl;
		wcout << L"\033[33m|| | | || \033[37m " << endl;
		wcout << L"\033[37m          \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Mộc")
	{
		wcout << L"\033[30m          \033[37m Quai vat" << L"\t\t\tHệ: " << he << endl;
		wcout << L"\033[32m   _O_    \033[37m Cấp : " << level << L"\t\t\tLoại :" << loai << endl;
		wcout << L"\033[32m /  |  \\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm khi tiêu diệt " << exp << endl;
		wcout << L"\033[32m|| | | || \033[37m " << endl;
		wcout << L"\033[37m          \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Thuỷ")
	{
		wcout << L"\033[30m          \033[37m Quai vat" << L"\t\t\tHệ: " << he << endl;
		wcout << L"\033[34m   _O_    \033[37m Cấp : " << level << L"\t\t\tLoại :" << loai << endl;
		wcout << L"\033[34m /  |  \\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm khi tiêu diệt " << exp << endl;
		wcout << L"\033[34m|| | | || \033[37m " << endl;
		wcout << L"\033[37m          \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Thổ")
	{
		wcout << L"\033[30m          \033[37m Quai vat" << L"\t\t\tHệ: " << he << endl;
		wcout << L"\033[0;33m   _O_    \033[37m Cấp : " << level << L"\t\t\tLoại :" << loai << endl;
		wcout << L"\033[0;33m /  |  \\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm khi tiêu diệt " << exp << endl;
		wcout << L"\033[0;33m|| | | || \033[37m " << endl;
		wcout << L"\033[37m          \033[37m Mức độ sát thương " << atk2 << endl;
	}
	
}

float Monster::atk()
{
	if(loai==L"thông thường")
	{
		float t = (float)level;
		t *= (float)3;
		exp = (float)25 * (float)level;
		hp = (float)35 * (float)level;
		atk2 = t;
		exp = level * (float)50;
		return t;
	}
	else
	{
		float t = (float)level;
		t *= (float)7;
		exp = (float)50 * (float)level;
		hp = (float)100 * (float)level;
		atk2 = t;
		exp = level * (float)100;
		return t;
	}
}

void Monster::NhanSatThuong(float t)
{
	hp -= t;
}
