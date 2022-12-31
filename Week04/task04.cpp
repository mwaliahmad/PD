#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
void printMaze();
void printCursor(int x, int y);
main()
{
  system("cls");
  printMaze();
  int x = 3;
  int y = 3;
  while(true)
  {
    printCursor(x, y);
    if(x < 27)
    {
      x = x + 1; 
    }
    if(x == 26)
    {
      gotoxy(x-1, y);
      cout << " ";
      x = 2; 
    }

  }
  

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
  cout << "P";
  gotoxy (x, y);
  Sleep (200);
}