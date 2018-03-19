// CrazyTanks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"

#include <memory>

using namespace std;

int main()
{
	auto game = shared_ptr<Game>(new Game(40, 20));

	while (!game->getGameOver()) {
		game->Draw();
	}

	system("PAUSE");
    return 0;
}

