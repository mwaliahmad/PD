#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void erase(int x, int y);
void printP(int x, int y);
void gotoxy(int x, int y);
char getCharAtxy(int short x, int short y);

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    bool game = true;

    system("cls");
    printMaze();
    printP(pacmanX,pacmanY);
    while(game)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX , pacmanY - 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printP(pacmanX, pacmanY);
            }
        }
            if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))        
        {
            game = false;
        }
        Sleep(200);
    }
}



void printMaze()
{
    cout << "##########" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "##########" << endl;
}

void erase(int x , int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printP(int x, int y)
{
    gotoxy(x , y);
    cout << "P";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

char getCharAtxy (short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy= {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize. Y = 1;
    return ReadConsoleOutput (GetStdHandle (STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect)? ci.Char.AsciiChar:' ';
}