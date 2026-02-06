#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
		
	public:
		float m1,m2,m3;
		float marks;
		float percentage;
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
		
			cout<<"Enter your name:";
			cin.getline(name,50);
			
			cout<<"Enter your marks:";
			cin>>m1>>m2>>m3;
			
			marks = m1+m2+m3;
			percentage = marks*3;
			
			
		
		}
		void output(){
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
