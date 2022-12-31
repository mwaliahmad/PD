#include <iostream>
using namespace std;
void menu();
void aggregate(string name, float matric, float inter, float ecat);
void rollNumber(string name1 ,int Emarks1,string name2 ,int Emarks2);
main()
{
  int choice;
  string studentname1;
  float student1marksM; 
  float student1marksI; 
  float student1marksE; 
  string studentname2;
  float student2marksM; 
  float student2marksI; 
  float student2marksE;
  string back;
  while (true)
  {
    system("cls");
    menu();
    cout << "Enter Choice: ";
    cin >> choice;
    if (choice == 1)
    {
      system("cls");
      cout << "You choosed: 1" << endl;
      cout << "Enter your Name: ";
      cin >> studentname1;
      cout << "Enter Your Matric Marks(out of 1100): ";
      cin >> student1marksM;
      cout << "Enter Your Inter Marks(out of 550): ";
      cin >> student1marksI;
      cout << "Enter Your ECAT Marks: ";  
      cin >> student1marksE;
      cout << "Enter any key to continue...";
      cin >> back;  
    }
    if (choice == 2)
    {
      system("cls");    
      cout << "You choosed: 2" << endl;
      cout << "Enter your Name: ";
      cin >> studentname2;
      cout << "Enter Your Matric Marks(out of 1100): ";
      cin >> student2marksM;
      cout << "Enter Your Inter Marks(out of 550): ";
      cin >> student2marksI;
      cout << "Enter Your ECAT Marks: ";  
      cin >> student2marksE;
      cout << "Enter any key to continue...";
      cin >> back;  
    }
    if (choice == 3)
    {
      system("cls");
      aggregate(studentname1, student1marksM, student1marksI, student1marksE);
      cout << "Enter any key to continue...";
      cin >> back;   
    }
    if (choice == 4)
    {
      system("cls");
      aggregate(studentname2, student2marksM, student2marksI, student2marksE);  
      cout << "Enter any key to continue...";
      cin >> back;   
    }
      if (choice == 5)
    {
      system("cls");
      rollNumber(studentname1 , student1marksE, studentname2 , student2marksE);
      
      cout << "Enter any key to continue...";
      cin >> back;   
    }

   }
}
void menu()
{
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "            ***********************" << endl;
  cout << "            *      UET LAHORE     *" << endl;
  cout << "            ***********************" << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "Welcome to UET Admission Management System";
  cout << endl;
  cout << endl;
  cout << "Press 1 to Enter Details of 1st Student !" << endl;
  cout << "Press 2 to Enter Details of 2nd Student !" << endl;
  cout << "Press 3 to Calculate the aggregate of 1st Student !" << endl;
  cout << "Press 4 to Calculate the aggregate of 2nd Student !" << endl;
  cout << "Press 5 to Display the student with RollNumber 01 !" << endl;

}

void aggregate(string name, float matric, float inter, float ecat)
{
  float aggregate = ((matric/1100) * 30) + ((inter/550) * 30) + ((ecat/400) * 40);
  cout << name << "'s aggregate is " << aggregate << endl;
}

void rollNumber(string name1 ,int Emarks1,string name2 ,int Emarks2)
{
  if (Emarks1 > Emarks2)
  {
    cout << "Roll Number 01 is: " << name1  << endl;

  }
  if (Emarks2 > Emarks1)
  {
    cout << "Roll Number 01 is: " << name2 << endl;

  }
}