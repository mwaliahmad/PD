#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA1();
void printW ();
void printA2();
void printI ();
void printS ();
main()
{
  
  system("cls");
  printA1(); 
  printW ();
  printA2();
  printI ();
  printS ();
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printA1()
{  
  gotoxy(45 , 1);
  cout << "        A         " << endl; 
  gotoxy(45 , 2);  
  cout << "       A A        " << endl;
  gotoxy(45 , 3);
  cout << "      A   A       " << endl;
  gotoxy(45 , 4);
  cout << "     A     A      " << endl;
  gotoxy(45 , 5);
  cout << "    AAAAAAAAA     " << endl;
  gotoxy(45 , 6);
  cout << "   A         A    " << endl;
  gotoxy(45 , 7);
  cout << "  A           A   " << endl;
  gotoxy(45 , 8);
  cout << " A             A  " << endl;
 
}

void printW()
{ 
  
  gotoxy(45 , 10);
  cout << "W           W            " << endl;
  gotoxy(45 , 11);
  cout << "W           W            " << endl;
  gotoxy(45 , 12);
  cout << "W     W     W            " << endl;
  gotoxy(45 , 13);
  cout << "W    W W    W            " << endl;
  gotoxy(45 , 14);
  cout << "W   W   W   W            " << endl;
  gotoxy(45 , 15);
  cout << "W  W     W  W            "  << endl;
  gotoxy(45 , 16);
  cout << "W W       W W            " << endl;
  gotoxy(45 , 17);
  cout << "W           W            " << endl;  

}
void printA2()
{  
  gotoxy(45 , 19);
  cout << "        A         " << endl; 
  gotoxy(45 , 20);  
  cout << "       A A        " << endl;
  gotoxy(45 , 21);
  cout << "      A   A       " << endl;
  gotoxy(45 , 22);
  cout << "     A     A      " << endl;
  gotoxy(45 , 23);
  cout << "    AAAAAAAAA     " << endl;
  gotoxy(45 , 24);
  cout << "   A         A    " << endl;
  gotoxy(45 , 25);
  cout << "  A           A   " << endl;
  gotoxy(45 , 26);
  cout << " A             A  " << endl;
 
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

void printS()
{
  
  gotoxy(45 , 36);
  cout << "  SSSSSSSS  " << endl;
  gotoxy(45 , 37);
  cout << " SS         " << endl;
  gotoxy(45 , 38);   
  cout << " SS         " << endl;
  gotoxy(45 , 39);
  cout << "  SSSSSSSS  " << endl;
  gotoxy(45 , 40);
  cout << "         SS " << endl;
  gotoxy(45 , 41);
  cout << "         SS " << endl;
  gotoxy(45 , 42);
  cout << "  SSSSSSSS  " << endl;

}

