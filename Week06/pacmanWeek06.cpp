#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void erase(int x, int y, char previous);
void printP(int x, int y);
void printG1(int x, int y);
void printG2(int x, int y);
void gotoxy(int x, int y);
char getCharAtxy(int short x, int short y);

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int ghostX = 1;
    int ghostY = 1;
    string directionX = "right";
    string directionY = "up";
    char previousChar = ' ';
    bool game = true;

    system("cls");
    printMaze();
    /*printP(pacmanX, pacmanY);*/
    printG1(ghostX, ghostY);
    printG2(ghostX, ghostY);
    while (true)
    {
        Sleep(100);
        // horizontal move
        if (directionX == "right")
        {
            char nextLocation = getCharAtxy(ghostX + 1, ghostY);
            if (nextLocation == '#')
            {
                directionX = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(ghostX, ghostY, previousChar);
                ghostX = ghostX + 1;
                previousChar = nextLocation;
                printG1(ghostX, ghostY);
            }
        }
        if (directionX == "left")
        {
            char nextLocation = getCharAtxy(ghostX - 1, ghostY);
            if (nextLocation == '#')
            {
                directionX = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(ghostX, ghostY, previousChar);
                ghostX = ghostX - 1;
                previousChar = nextLocation;
                printG1(ghostX, ghostY);
            }
        }
    }
    while (true)
    {
        // vertical move
        Sleep(100);
        if (directionY == "up")
        {
            char nextLocation = getCharAtxy(ghostX, ghostY + 1);
            if (nextLocation == '#')
            {
                directionY = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(ghostX, ghostY, previousChar);
                ghostY = ghostY + 1;
                previousChar = nextLocation;
                printG2(ghostX, ghostY);
            }
        }
        if (directionY == "down")
        {
            char nextLocation = getCharAtxy(ghostX, ghostY - 1);
            if (nextLocation == '#')
            {
                directionY = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(ghostX, ghostY, previousChar);
                ghostY = ghostY - 1;
                previousChar = nextLocation;
                printG2(ghostX, ghostY);
            }
        }
    }

    /*while (game)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY, nextLocation);
                pacmanX = pacmanX - 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY, nextLocation);
                pacmanX = pacmanX + 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY, nextLocation);
                pacmanY = pacmanY - 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY, nextLocation);
                pacmanY = pacmanY + 1;
                printP(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            game = false;
        }
        Sleep(200);
    }*/
}

void printMaze()
{
    cout << "##########" << endl;
    cout << "#  .   . #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "#        #" << endl;
    cout << "##########" << endl;
}

void erase(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void printP(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void printG1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printG2(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
