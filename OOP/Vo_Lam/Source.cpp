#include <iostream>
#include"BLL.h"
#include <io.h>
#include <fcntl.h>
#include <windows.h> 
#include "Game.h"

using namespace std;

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	BLL a;
	a.begin();
	a.huongdan();
	Game b;
	b.begin();
	b.Man1();

}