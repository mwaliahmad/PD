#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y, char previous);
void printP(int x, int y);
void eraseP(int x, int y);
char getCharAtxy(short int x, short int y);
void printG1(int x, int y);
void printG2(int x, int y);
main()
{
    int pacmanX = 3;
    int pacmanY = 6;
    int ghostX1 = 4;
    int ghostY1 = 4;
    int ghostX2 = 3;
    int ghostY2 = 6;
    int score = 0;
    int incremenent = 5;
    string directionX = "right";
    string directionY = "up";
    char previousChar = ' ';
    bool game = true;

    system("cls");

    cout << "SCORE: " << score;
    cout << endl;
    cout << endl;
    cout << endl;
    printMaze();

    while (game)
    {
        Sleep(100);

        // horizontal move
        if (directionX == "right")
        {
            char nextLocation = getCharAtxy(ghostX1 + 1, ghostY1);
            if (nextLocation == '|')
            {
                directionX = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX1, ghostY1, previousChar);
                ghostX1 = ghostX1 + 1;
                printG1(ghostX1, ghostY1);
            }
        }
        if (directionX == "left")
        {
            char nextLocation = getCharAtxy(ghostX1 - 1, ghostY1);
            if (nextLocation == '|')
            {
                directionX = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX1, ghostY1, previousChar);
                ghostX1 = ghostX1 - 1;
                printG1(ghostX1, ghostY1);
            }
        }

        // vertical move
        if (directionY == "up")
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2 + 1);
            if (nextLocation == '#')
            {
                directionY = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX2, ghostY2, previousChar);
                ghostY2 = ghostY2 + 1;
                printG2(ghostX2, ghostY2);
            }
        }
        if (directionY == "down")
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2 - 1);
            if (nextLocation == '#')
            {
                directionY = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX2, ghostY2, previousChar);
                ghostY2 = ghostY2 - 1;
                printG2(ghostX2, ghostY2);
            }
        }

        // pacman
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printP(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printP(pacmanX, pacmanY);
                score++;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printP(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printP(pacmanX, pacmanY);
                score++;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printP(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printP(pacmanX, pacmanY);
                score++;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printP(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printP(pacmanX, pacmanY);
                score++;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            game = false;
        }
    }
}

void printMaze()
{
    cout << "######################################################################" << endl;
    cout << "||.. .....................................................  ......  ||" << endl;
    cout << "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||" << endl;
    cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" << endl;
    cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" << endl;
    cout << "||..        %%%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..  %%%%.   ||" << endl;
    cout << "||..       |%|        . . |%|...    ............... |%| ..      .   ||" << endl;
    cout << "||..       %%%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..  %%%%.   ||" << endl;
    cout << "||..               |%|.             |%|......       |%| ..   |%|.   ||" << endl;
    cout << "||..     ......... |%|.             |%|......|%|        ..   |%|.   ||" << endl;
    cout << "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%||%|.   ||" << endl;
    cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||" << endl;
    cout << "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||" << endl;
    cout << "||..|%|            .           ...|%|               |%| ..|%|.      ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||" << endl;
    cout << "||...............................................   |%| ..........  ||" << endl;
    cout << "||   ............................................          .......  ||" << endl;
    cout << "||..|%|  |%|   |%|..   %%%%%%%%%%%%%  .......|%|    |%| ..|%|.      ||" << endl;
    cout << "||..|%|  |%|   |%|..          ...|%|      %%%%%%    |%| ..|%|.      ||" << endl;
    cout << "||..|%|            .          ...|%|                |%| ..|%|.      ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%     |%| ..|%|%%%%%% ||" << endl;
    cout << "||...............................................   |%| ........... ||" << endl;
    cout << "||  .............................................       ........... ||" << endl;
    cout << "######################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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

void eraseP(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
