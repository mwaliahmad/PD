#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
  system("cls");
  name();
}
void name()
{
  gotoxy(45,15);
  cout << "W         W       A       L         IIIIIII" << endl;
  gotoxy(45,16);
  cout << "W         W      A A      L            I   " << endl;
  gotoxy(45,17);
  cout << "W    W    W     A   A     L            I   " << endl;
  gotoxy(45,18);
  cout << "W   W W   W    A     A    L            I   " << endl;
  gotoxy(45,19);
  cout << "W  W   W  W   AAAAAAAAA   L            I   " << endl;
  gotoxy(45,20);
  cout << "W W     W W   A       A   L            I   " << endl;
  gotoxy(45,21);
  cout << "W         W   A       A   LLLLLLL   IIIIIII" << endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}