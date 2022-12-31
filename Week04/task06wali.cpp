#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printW ();
void printA();
void printL();
void printI ();
main()
{
  
  system("cls");
  printW ();
  printA(); 
  printL();
  printI ();
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printW()
{ 
  
  gotoxy(45 , 1);
  cout << "W           W            " << endl;
  gotoxy(45 , 2);
  cout << "W           W            " << endl;
  gotoxy(45 , 3);
  cout << "W     W     W            " << endl;
  gotoxy(45 , 4);
  cout << "W    W W    W            " << endl;
  gotoxy(45 , 5);
  cout << "W   W   W   W            " << endl;
  gotoxy(45 , 6);
  cout << "W  W     W  W            "  << endl;
  gotoxy(45 , 7);
  cout << "W W       W W            " << endl;
  gotoxy(45 , 8);
  cout << "W           W            " << endl;  

}
void printA()
{  
  gotoxy(45 , 10);
  cout << "        A         " << endl; 
  gotoxy(45 , 11);  
  cout << "       A A        " << endl;
  gotoxy(45 , 12);
  cout << "      A   A       " << endl;
  gotoxy(45 , 13);
  cout << "     A     A      " << endl;
  gotoxy(45 , 14);
  cout << "    AAAAAAAAA     " << endl;
  gotoxy(45 , 15);
  cout << "   A         A    " << endl;
  gotoxy(45 , 16);
  cout << "  A           A   " << endl;
  gotoxy(45 , 17);
  cout << " A             A  " << endl;
 
}

void printL()
{  
  gotoxy(45 , 19);
  cout << " L               " << endl; 
  gotoxy(45 , 20);  
  cout << " L       " << endl;
  gotoxy(45 , 21);
  cout << " L           " << endl;
  gotoxy(45 , 22);
  cout << " L        " << endl;
  gotoxy(45 , 23);
  cout << " L     " << endl;
  gotoxy(45 , 24);
  cout << " L    " << endl;
  gotoxy(45 , 25);
  cout << " L              " << endl;
  gotoxy(45 , 26);
  cout << " LLLLLLLLLLL    " << endl;
 
}

void printI()
{
  gotoxy(45 ,28 );
  cout << "IIIIIIIII" << endl;
  gotoxy(45 ,29 );
  cout << "    I    " << endl;
  gotoxy(45 ,30 );
  cout << "    I    " << endl;
  gotoxy(45 ,31 );
  cout << "    I    " << endl;
  gotoxy(45 ,32 );
  cout << "    I    " << endl;
  gotoxy(45 ,33 );
  cout << "    I    " << endl;
  gotoxy(45 ,34 );
  cout << "IIIIIIIII" << endl;
}

