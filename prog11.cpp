#include <iostream>
using namespace std;

class Student
{
private:
    int roll, sub1, sub2, sub3, total;
    float per;
    char name[50];

    void calculate()
    {
        total = sub1 + sub2 + sub3;
        per = (float(total) / 300) * 100;
    }

public:

    void input()
    {
        cout << "Enter your roll: ";
        cin >> roll;
        cin.get();   // to remove newline

        cout << "Enter your name: ";
        cin.getline(name, 50);

        cout << "Enter three different subject marks: ";
        cin >> sub1 >> sub2 >> sub3;
    }

 

    void output()
    {
        calculate();
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << per << "%" << endl;
    }
    int getRoll(){
    	return roll;
	}
};

int main()
{
    Student s[5];
    int i, roll, temp = 0;
   

    // Input 5 students
    for(i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        s[i].input();
    }

    // Search student
    cout << "\nEnter roll number to view student data: ";
    cin >> roll;

    for(i = 0; i < 5; i++)
    {
        if(s[i].getRoll() == roll)
        {
            s[i].output();
            temp = 1;
            break;
        }
    }

    if(temp == 0)
        cout << "Roll no not found" << endl;

    return 0;
}
