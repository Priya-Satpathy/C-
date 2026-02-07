#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
		int m1,m2,m3;
		int marks;
		float percentage;
		
			void calculate(){
			marks = m1+m2+m3;
			percentage = float(marks)/300*100;
		}
	public:
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
		
			cout<<"Enter your name:";
			cin.getline(name,50);
			
			cout<<"Enter your marks:";
			cin>>m1>>m2>>m3;		
		
		}
	
		void output(){
			calculate();
			cout<<"Roll number = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Marks = "<<marks<<endl;
			cout<<"Percentage = "<<percentage<<endl;
		}
};
int main(){
	student s;
	s.input();	
	s.output();
}
