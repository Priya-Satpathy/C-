#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		char name[50];
	
	public:
		void getData(){
			cout<<"Enter roll number:"<<endl;
			cin>>roll;
			cin.get();
			
		
			cout<<"Enter your name:"<<endl;
			cin.getline(name,50);
			
			
		}
		void showData(){
			cout<<"Roll number = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"___________________________________"<<endl;
		
		}
};
class Address{
	protected:
		char city[50],state[50];
		int pin;
	public:
		void getAddress(){
			cout<<"Enter the city of a student:";
			cin.getline(city,50);
			
			
			cout<<"Enter the state of a student:";
			cin.getline(state,50);
			
			
			cout<<"Enter the pin of a student:";
			cin>>pin;
			
			
		}
		void showAddress(){
			cout<<"Address"<<endl;
			cout<<"State: "<<state<<endl;
			cout<<"City:"<<city<<endl;
			
			cout<<"___________________________________"<<endl;
			
		}
};
class Mark:public Student, public Address{
		private:
			
			int m1,m2,m3;
			int marks;
			float percentage;
		public:
			void getMark(){
				
				getData();
				getAddress();
				cout<<"Enter 3 subject marks:";
				cin>>m1>>m2>>m3;
				marks = m1+m2+m3;
				percentage = float(marks)/300*100;
				
				cout<<"___________________________________"<<endl;
			}
			
			void showMark(){
				showData();
				showAddress();
				cout<<"Marks = "<<marks<<endl;
				cout<<"Percentage = "<<percentage<<endl;
				cout<<"___________________________________"<<endl;
			}
};
	
	

int main(){
	Mark obj;
	obj.getMark();
	obj.showMark();

}
