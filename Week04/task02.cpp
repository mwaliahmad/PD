#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printCursor(int x, int y);
main()
{
  system("cls");
  printMaze();
  int x = 3;
  int y = 3;
  printCursor(x, y);

}
void printMaze()
{
  cout << "###########################" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "#                         #" << endl;
  cout << "###########################" << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printCursor(int x, int y)
{
  gotoxy (x-1, y);
  cout << " ";
  gotoxy (x, y)
  cout << "P";
  Sleep (200);
}