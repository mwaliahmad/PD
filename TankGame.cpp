#include <iostream>
#include <windows.h>
using namespace std;

char character = 219;
char tank1[6] = {character, character, character, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '-', '-', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

int bulletx[100];
int bullety[100];
bool activebullet[100];
int bulletCount = 0;

int score = 0;

int tankx = 10;
int tanky = 5;

int enemyx = 30;
int enemyy = 10;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void erasetank();
void printTank();
void eraseEnemy();
void printEnemy();
void printmaze();
void moveEnemy();
void inactive(int index);
void movebullet();
void eraseBullet(int x, int y);
void printBullet(int x, int y);
void createBullet();
void moveTankDown();
void moveTankUp();
void moveTankLeft();
void moveTankRight();
void printScore();
void addScore();
void collision();
string enemydirection = "down";
main()
{
    system("cls");
    printmaze();
    printEnemy();
    printTank();
    while (true)
    {
        printScore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveTankLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveTankRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveTankUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            createBullet();
        }
        movebullet();
        moveEnemy();
        collision();
        Sleep(100);
    }
}
void moveTankUp()
{
    char next = getCharAtxy(tankx, tanky - 1);
    if (next == ' ')
    {
        erasetank();
        tanky--;
        printTank();
    }
}
void moveTankDown()
{
    char next = getCharAtxy(tankx, tanky + 2);
    if (next == ' ')
    {
        erasetank();
        tanky++;
        printTank();
    }
}
void moveTankLeft()
{
    char next = getCharAtxy(tankx - 1, tanky);
    if (next == ' ')
    {
        erasetank();
        tankx--;
        printTank();
    }
}
void moveTankRight()
{
    char next = getCharAtxy(tankx + 6, tanky);
    if (next == ' ')
    {
        erasetank();
        tankx++;
        printTank();
    }
}
void createBullet()
{
    bulletx[bulletCount] = tankx + 7;
    bullety[bulletCount] = tanky;
    activebullet[bulletCount] = true;
    gotoxy(tankx + 7, tanky);
    cout << ".";
    bulletCount++;
}
void movebullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (activebullet[x] == true)
        {
            char next = getCharAtxy(bulletx[x] + 1, bullety[x]);
            if (next != ' ')
            {
                eraseBullet(bulletx[x], bullety[x]);
                inactive(x);
            }
            else
            {
                eraseBullet(bulletx[x], bullety[x]);
                bulletx[x]++;
                printBullet(bulletx[x], bullety[x]);
            }
        }
    }
}
void printTank()
{
    gotoxy(tankx, tanky);
    for (int x = 0; x < 6; x++)
    {
        cout << tank1[x];
    }
    gotoxy(tankx, tanky + 1);
    for (int x = 0; x < 6; x++)
    {
        cout << tank2[x];
    }
}
void erasetank()
{
    gotoxy(tankx, tanky);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
    gotoxy(tankx, tanky + 1);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
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
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printmaze()
{
    cout << "##########################################" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "#                                        #" << endl;
    cout << "##########################################" << endl;
}

void printEnemy()
{
    gotoxy(enemyx, enemyy);
    for (int x = 0; x < 6; x++)
    {
        cout << enemy1[x];
    }
    gotoxy(enemyx, enemyy + 1);
    for (int x = 0; x < 6; x++)
    {
        cout << enemy2[x];
    }
    gotoxy(enemyx, enemyy + 2);
    for (int x = 0; x < 6; x++)
    {
        cout << enemy3[x];
    }
    gotoxy(enemyx, enemyy + 3);
    for (int x = 0; x < 6; x++)
    {
        cout << enemy4[x];
    }
}

void moveEnemy()
{
    if (enemydirection == "up")
    {
        char next = getCharAtxy(enemyx, enemyy - 1);
        if (next == ' ')
        {
            eraseEnemy();
            enemyy--;
            printEnemy();
        }
        if (next == '#')
        {
            enemydirection = "down";
        }
    }
    if (enemydirection == "down")
    {
        char next = getCharAtxy(enemyx, enemyy + 4);
        if (next == ' ')
        {
            eraseEnemy();
            enemyy++;
            printEnemy();
        }
        if (next == '#')
        {
            enemydirection = "up";
        }
    }
}

void eraseEnemy()
{
    gotoxy(enemyx, enemyy);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
    gotoxy(enemyx, enemyy + 1);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
    gotoxy(enemyx, enemyy + 2);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
    gotoxy(enemyx, enemyy + 3);
    for (int x = 0; x < 6; x++)
    {
        cout << " ";
    }
}

void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void inactive(int index)
{
    activebullet[index] = false;
}

void addScore()
{
    score++;
}

void collision()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (activebullet[x] == true)
        {
            if (bulletx[x] + 1 == enemyx && (bullety[x] == enemyy || bullety[x] == enemyy + 2 || bullety[x] == enemyy + 3))
            {
                addScore();
            }
            if (bulletx[x] == enemyx - 1 && bullety[x] == enemyy + 1)
            {
                addScore();
            }
        }
    }
}

void printScore()
{
    gotoxy(45, 8);
    cout << "Score; " << score;
}