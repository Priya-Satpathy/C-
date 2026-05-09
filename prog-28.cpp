#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		char name[50];
		
	public:
		void getData(){
			cout<<"Enter roll number:";
			cin>>roll;
			
		
			cout<<"Enter your name:";
			cin.getline(name,50);
		}
		void showData(){
			cout<<"Roll number = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
		
		}
};
class Mark:public Student{
		private:
			
			int m1,m2,m3;
			int marks;
			float percentage;
		public:
			void getMark(){
				getData();
				cout<<"Enter 3 subject marks:";
				cin>>m1>>m2>>m3;
				marks = m1+m2+m3;
				percentage = float(marks)/300*100;
			}
			
			void showMark(){
				showData();
				cout<<"Marks = "<<marks<<endl;
				cout<<"Percentage = "<<percentage<<endl;
			}
};
	
	

int main(){
	Mark obj;
	obj.getMark();
	obj.showMark();

}
