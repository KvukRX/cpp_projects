#pragma once

#include <iostream>
using namespace std;

class Level{
public: 
    char** LevelCreate();
    void PrintLevel(char**);
};

char** Level::LevelCreate(){
    char** arr = new char*[9];

    cout << "Draw your level using - as walls and 0 as halls" << endl;
    cout << "  " <<  string (10, char(31)) << endl;

    for (int i = 0; i < 9; ++i) {
        cout << i+1 << " ";
        arr[i] = new char[9];
        gets(arr[i]);
    }
    system("cls");
    return arr;
}

void Level::PrintLevel(char** level){
    for (int i = 0; i < 9; i++) 
    {         
        cout << level[i] <<endl;
    }
}

