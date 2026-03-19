#include <iostream>
using namespace std;

class Student
{
private:
    int  roll;
    char name[50],clgName[50];
  

public:

    void input()
    {
        cout << "Enter your roll: ";
        cin>>roll;
        cin.get();   // to remove newline

        cout << "Enter your name: ";
        cin.getline(name, 50);

        cout << "Enter your clg name: ";
        cin.getline(clgName, 50);

    }

 

    void output()
    {
        
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
         cout << "Clgname: " << clgName << endl;
        
    }
};

int main()
{
    Student s[5];
  	int i;
   

    // Input 5 students
    for(i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        s[i].input();
    }
	
	    for(i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        s[i].output();
    }
    


    return 0;
}
