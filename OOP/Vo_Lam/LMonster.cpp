#include "LMonster.h"
#include "Character.h"
void LMonster::Nhap()
{
	cout << "Nhap ten quai thuong: ";
	cin >> name;
	cout << "Nhap level cua quai thuong: ";
	cin >> level;
	cout << "Nhap he nguyen to cua quai thuong: ";
	cin >> element;
	cout << "Nhap level cua quai thuong: ";
	cin >> level;
	damage = level * 3;
}

void LMonster::atk(& enemy)
{
    if ((element == "Hoa" && enemy->element == "Tho")
        || (element == "Tho" && enemy.element == "Kim")
        || (element == "Kim" && enemy.element == "Thuy")
        || (element == "Thuy" && enemy.element == "Moc")
        || (element == "Moc" && enemy.element == "Hoa"))
        damage += (int)(damage * 0.1);
    else if ((element == "Moc" && enemy.element == "Tho")
        || (element == "Hoa" && enemy.element == "Kim")
        || (element == "Tho" && enemy.element == "Thuy")
        || (element == "Kim" && enemy.element == "Moc")
        || (element == "Thuy" && enemy.element == "Hoa"))
       damage += (int)(damage * 0.2);
    else if ((enemy.element == "Moc" && element == "Tho")
        || (enemy.element == "Hoa" && element == "Kim")
        || (enemy.element == "Tho" && element == "Thuy")
        || (enemy.element == "Kim" && element == "Moc")
        || (enemy.element == "Thuy" && element == "Hoa"))
        damage -= (int)(damage * 0.2);
}
