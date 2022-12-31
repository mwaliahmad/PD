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
  int y = 2;
  while(true)
  {
    printCursor(x, y);
    if(y < 9)
    {
      y = y + 1; 
    }
    if(y == 8)
    {
      gotoxy(x, y-1);
      cout << " "; 
      y = 2;
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
  gotoxy (x, y-1);
  cout << " ";
  gotoxy (x, y);
  cout << "P";
  Sleep (200);
}