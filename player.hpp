#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class Player{
public:
    int Px;
    int Py;
    int Tx;
    int Ty;

    void Locating(char**);
    void Movement(char**, int, int, int, int);
};

void Player::Locating(char** level){
    cout <<"enter player coordinates: ";
    cin >> Px >> Py;
    cout << "enter treasure coordinates: ";
    cin >> Tx >> Ty;
    
    if (Px == Tx && Py == Ty){
        cout << "you cant enter the same coordinates!"<< endl;
        Locating(level);
    }

    if (level[Px][Py] != '-')
    {
        level[Px][Py] = 'o';
    }
    else
    {
        cout << "you cannot start from here"<< endl;
        Locating(level);

    }
    if (level[Tx][Ty] != '-')
    {
        level[Tx][Ty] = '*';
    }
    else
    {
        cout << "treasure cannot be plased here" << endl;
        Locating(level);
    }
}

void Player::Movement(char** level, int Px, int Py, int Tx, int Ty){
    int where;
    cout << "where you want to go? \n 1:up 2:down 3:left 4:right" << endl;
    cin >> where;

    switch (where)
    {
    case 1:
        if (level[Px][Py + 1] = '-') cout << "you cant go here!" << endl; Movement(level, Px, Py, Tx, Ty);

        level[Px][Py] = 'x';
        level[Px][Py + 1] = 'o';
        Py++;

        break;
    case 2:
        if (level[Px][Py - 1] = '-') cout << "you cant go here!" << endl; Movement(level, Px, Py, Tx, Ty);

        level[Px][Py] = 'x';
        level[Px][Py - 1] = 'o';
        Py--;
        break;
    case 3:
        if (level[Px - 1][Py] = '-') cout << "you cant go here!" << endl; Movement(level, Px, Py, Tx, Ty);

        level[Px][Py] = 'x';
        level[Px - 1][Py] = 'o';
        Px--;
        break;
    case 4:
        if (level[Px + 1][Py] = '-') cout << "you cant go here!" << endl; Movement(level, Px, Py, Tx, Ty);

        level[Px][Py] = 'x';
        level[Px + 1][Py] = 'o';
        Px++;
        break;
    
    default:
        break;
    }

    if (Px == Tx && Py == Ty) 
    {
        system("cls");
        cout << "you found it!";
    }
    else{
        system("cls");
        for (int i = 0; i < 9; i++) 
        {         
            cout << level[i] <<endl;
        }
        Movement(level, Px, Py, Tx, Ty);
    } 



}

