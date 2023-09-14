#include "Player.h"
#include "Element.h"

void Player::Nhap()
{
	wcout << endl << L"Nhập tên của player: ";wcin >> name;
	wcout << L"Nhập cấp độ của player: ";wcin >> level;
	wcout << L"Hãy chọn môn phái trong Thập đại môn phái: \n";
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
	atk();
}

Player::Player()
{
	Nhap();
}

Player::Player(int t)
{
	wcout << endl << L"Nhập tên của player: "; wcin >> name;
	level = t;
	wcout << L"Hãy chọn môn phái trong Thập đại môn phái: \n";
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
	wcin >> t;
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
	atk();
}

void Player::Xuat()
{
	//wcout << "-------------------------------------------------------------------------";
	wcout << L"Người chơi:" << name << endl;
	wcout << L"Cấp độ của Người chơi: "<< level<<endl;
	wcout << L"Môn phái của người chơi trong thập đại môn phái: " << mon << endl;
	wcout << L"Hệ của người choi trong ngũ hành: " << he << endl;
	wcout << L"Mức độ sát thương " << atk2 << endl;
}

void Player::XuatGame()
{
	
	if (he == L"Hoả")
	{
		wcout << L"\033[30m       \033[37m Người chơi:" << name << L"\t\tHệ: " << he << endl;
		wcout << L"\033[31m   O   \033[37m Cấp : " << level << L"\t\t\tMôn phái :" << mon << endl;
		wcout << L"\033[31m  /|\\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm để lên cấp: " << exp <<"/"<<exp2<< endl;
		wcout << L"\033[31m  / \\  \033[37m "<< endl;
		wcout << L"\033[37m       \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Kim")
	{
		wcout << L"\033[30m       \033[37m Người chơi:" << name << L"\t\tHệ: " << he << endl;
		wcout << L"\033[33m   O   \033[37m Cấp : " << level << L"\t\t\tMôn phái :" << mon << endl;
		wcout << L"\033[33m  /|\\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm để lên cấp: " << exp << "/" << exp2 << endl;
		wcout << L"\033[33m  / \\  \033[37m " << endl;
		wcout << L"\033[37m       \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Mộc")
	{
		wcout << L"\033[30m       \033[37m Người chơi:" << name << L"\t\tHệ: " << he << endl;
		wcout << L"\033[32m   O   \033[37m Cấp : " << level << L"\t\t\tMôn phái :" << mon << endl;
		wcout << L"\033[32m  /|\\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm để lên cấp: " << exp << "/" << exp2 << endl;
		wcout << L"\033[32m  / \\  \033[37m " << endl;
		wcout << L"\033[37m       \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Thuỷ")
	{
		wcout << L"\033[30m       \033[37m Người chơi:" << name << L"\t\tHệ: " << he << endl;
		wcout << L"\033[34m   O   \033[37m Cấp : " << level << L"\t\t\tMôn phái :" << mon << endl;
		wcout << L"\033[34m  /|\\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm để lên cấp: " << exp << "/" << exp2 << endl;
		wcout << L"\033[34m  / \\  \033[37m " << endl;
		wcout << L"\033[37m       \033[37m Mức độ sát thương " << atk2 << endl;
	}
	if (he == L"Thổ")
	{
		wcout << L"\033[30m       \033[37m Người chơi:" << name << L"\t\tHệ: " << he << endl;
		wcout << L"\033[0;33m   O   \033[37m Cấp : " << level << L"\t\t\tMôn phái :" << mon << endl;
		wcout << L"\033[0;33m  /|\\  \033[37m HP: " << hp << L"\t\t\tKinh nghiệm để lên cấp: " << exp << "/" << exp2 << endl;
		wcout << L"\033[0;33m  / \\  \033[37m " << endl;
		wcout << L"\033[37m       \033[37m Mức độ sát thương " << atk2 << endl;
	}
}

float Player::atk()
{
	hp = level * (float)50;
	float t = (float)level;
	t *= (float)5.0;
	atk2 = t;
	exp2 = level * (float)100;
	return t;
}

void Player::NhanSatThuong(float t)
{
	hp -= t;
}

void Player::TangCap()
{
	if (exp >= exp2)
	{
		level++;
		atk();
	}
}
