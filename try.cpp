#include "level.hpp"
#include "player.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    Level level;
    char** arr;

    arr = level.LevelCreate();
    level.PrintLevel(arr);

    Player player;
    player.Locating(arr);

    system("cls");
    level.PrintLevel(arr);

    player.Movement(arr, player.Px, player.Py, player.Tx, player.Ty);

}