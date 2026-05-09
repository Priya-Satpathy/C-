#include<iostream>
using namespace std;
class Student{
	private:
		int roll;
		char name[50];
		int m1,m2,m3;
		int marks;
		float percentage;
	public:
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
		
			cout<<"Enter your name:";
			cin.getline(name,50);
		}
		void output(){
			cout<<"Roll number = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
		
		}
};
class Mark{
		private:
			
			int m1,m2,m3;
			int marks;
			float percentage;
		public:
			void input(){
				cout<<"Enter your marks:";
				cin>>m1>>m2>>m3;
			}
			void calculate(){
				marks = m1+m2+m3;
				percentage = float(marks)/300*100;
			}
			void showResult(){
				cout<<"Marks = "<<marks<<endl;
				cout<<"Percentage = "<<percentage<<endl;
			}
};
	
	

int main(){
	Student S;
	Mark M;
	
	S.input();	
	M.input();
	S.output();
	M.calculate();
	M.showResult();

}
