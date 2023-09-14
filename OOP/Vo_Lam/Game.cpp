#include "Game.h"
#include "BLL.h"
#include <windows.h> 
#include "ArrCharacter.h"
#include "Character.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
Game::Game()
{
   
}

Game::~Game()
{
}

void Game::begin()
{
    system("cls");
    wcout << "      __        ______    __    __    ______    __           _____       " << std::endl;
    wcout << "     |  |      |   ___|  |  |  |  |  |   ___|  |  |         |__   |   " << std::endl;
    wcout << "     |  |      |  |___   |  |  |  |  |  |___   |  |            |  |   " << std::endl;
    wcout << "     |  |      |   ___|   |  ||  |   |   ___|  |  |            |  |   " << std::endl;
    wcout << "     |  |___   |  |___     |    |    |  |___   |  |___       __|  |__ " << std::endl;
    wcout << "     |______|  |______|     |__|     |______|  |______|     |________|  " << std::endl;
    wcout << std::endl;
}

void Game::Man1()
{
    srand(time(0));
    wcout << L"Hãy nhập nhân vật bạn muốn có: \n";
    Character* H = new Player(1);
    Character* a = new Monster(1, 1);
    Character* b = new Monster(2, 1);
    Character* c = new Monster(3, 1);
    system("cls");
    wcout << L"Nhân vật bạn đã được nhận: \n";
    H->XuatGame();
    wcout << L"Hãy tiêu diệt những con quái sau: \n";
    a->XuatGame();
    b->XuatGame();
    c->XuatGame();
    int q = 0, aa=1, bb=1, cc=1;
    while(1)
    {
        if(q==0)
        {
            wcout << L"Bạn muốn tấn công quái nào(1,2,3): \n";
            int z; wcin >> z;
            if (z == 1)
                a->NhanSatThuong(H->SatThuong(a));
            if (z == 2)
                b->NhanSatThuong(H->SatThuong(b));
            if (z == 3)
                c->NhanSatThuong(H->SatThuong(c));
            if (a->HP() <= 0 && aa)
            {
                H->TangEx(a->ex());
                H->TangCap();
                aa = 0;
            }
            if (b->HP() <= 0 && bb)
            {
                H->TangEx(b->ex());
                H->TangCap();
                bb = 0;
            }
            if (c->HP() <= 0 && cc)
            {
                H->TangEx(c->ex());
                H->TangCap();
                cc = 0;
            }
            q = 1;
        }
        system("pause"); system("cls");
        H->XuatGame();
        if (a->HP()> 0)
            a->XuatGame();
        else
            wcout << L"Quái vật 1 đã bị tiêu diệt\n";
        if (b->HP() > 0)
            b->XuatGame();
        else
            wcout << L"Quái vật 2 đã bị tiêu diệt\n";
        if (c->HP() > 0)
            c->XuatGame();
        else
            wcout << L"Quái vật 3 đã bị tiêu diệt\n";
        if (q)
        {
            int z; z = rand() % 3 + 1;
            if (z == 1)
            {
                wcout << L"Quái vật 1 đã tấn công bạn\n";
                H->NhanSatThuong(a->SatThuong(H));
            }
            if (z == 2)
            {
                wcout << L"Quái vật 2 đã tấn công bạn\n";
                H->NhanSatThuong(b->SatThuong(H));
            }
            if (z == 3)
            {
                wcout << L"Quái vật 3 đã tấn công bạn\n";
                H->NhanSatThuong(b->SatThuong(H));
            }
            q = 0;
        }
         system("pause"); system("cls");

        if (H->HP() <= 0)
        {
            Thua();
            break;
        }
        if (a->HP() <= 0 && b->HP() <= 0 && c->HP() <= 0)
        {
            Thang();
            break;
        }
    }
}

void Game::Thua()
{
    wcout << L"Bạn đã thua";
}

void Game::Thang()
{
    wcout << L"Bạn đã thắng";
}
