// CrazyTanks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"

#include <memory>

using namespace std;

//TODO: разобраться с табуляциями на гите
int main()
{
	auto game = shared_ptr<Game>(new Game(40, 20));

	while (!game->getGameOver()) {
		//char c;

		//c = _getch();
		//cout << (int)c << endl;
		//c = _getch();
		//cout << (int)c << endl;

		game->Draw();
		game->Input();
		game->Logic();
	}

	system("PAUSE");
    return 0;
}

