#include "Player.h"
#include "Kim.h"
#include "Moc.h"
#include "Thuy.h"
#include "Hoa.h"
#include "Tho.h"
#include "BLL.h"
void Player::Nhap()
{
	wcout << endl;
	wcout << L"Nhập tên của player: ";
	wcin >> name;
	wcout << L"Nhập cấp độ của player: ";
	wcin >> level;
	wcout << L"Hãy chọn môn phái trong Thập đại môn phái: " << endl;
	wcout << L"\t1. Thiếu Lâm\n";
	wcout << L"\t2. Thiên Vương Bang\n";
	wcout << L"\t3. Ngũ Độc Giáo\n";
	wcout << L"\t4. Đường Môn\n";
	wcout << L"\t5. Nga My\n";
	wcout << L"\t6. Thuý Yên Môn\n";
	wcout << L"\t7. Cái Bang\n";
	wcout << L"\t8. Thiên Nhẫn Giáo\n";
	wcout << L"\t9. Côn Lôn\n";
	wcout << L"\t10. Võ Đang \n";
	int t; wcin >> t;
	switch (t)
	{
	case 1:
		mp = new Kim();
		he = L"Kim";
		mon = L"Thiếu Lâm";
		break;
	case 2:
		mp = new Kim();
		he = L"Kim";
		mon = L"Thiên Vương Bang";
		break;
	case 3:
		mp = new Moc();
		he = L"Mộc";
		mon = L"Ngũ Độc Giáo";
		break;
	case 4:
		mp = new Moc();
		he = L"Mộc";
		mon = L"Đường Môn";
		break;
	case 5:
		mp = new Thuy();
		he = L"Thuỷ";
		mon = L"Nga My";
		break;
	case 6:
		mp = new Thuy();
		he = L"Thuỷ";
		mon = L"Thuý Yên Môn";
		break;
	case 7:
		mp = new Hoa();
		he = L"Hoả";
		mon = L"Cái Bang";
		break;
	case 8:
		mp = new Hoa();
		he = L"Hoả";
		mon = L"Thiên Nhẫn Giáo";
		break;
	case 9:
		mp = new Tho();
		he = L"Thổ";
		mon = L"Côn Lôn";
		break;
	case 10:
		mp = new Tho();
		he = L"Thổ";
		mon = L"Võ Đang";
		break;
	}
}

void Player::Xuat()
{
	wcout << name << endl;
	wcout << L"Cấp độ của player: ";
	wcout << level << endl;
	wcout << L"Môn phái của player trong thập đại môn phái: " << mon << endl;
	wcout << L"Hệ của player trong ngũ hành: " << he << endl;
	wcout << L"Mức độ sát thương " << atk2 << endl;
}
