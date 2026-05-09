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

class Result{
		protected:
			
			int m1,m2,m3;
			int marks;
			float percentage;
		public:
			void getResult(){
				
			
				cout<<"Enter 3 subject marks:";
				cin>>m1>>m2>>m3;
				marks = m1+m2+m3;
				percentage = float(marks)/300*100;
				
				cout<<"___________________________________"<<endl;
			}
			
			void showResult(){
			
				cout<<"Marks = "<<marks<<endl;
				cout<<"Percentage = "<<percentage<<endl;
				cout<<"___________________________________"<<endl;
			}
};
	
class Address:public Result,public Student{
	private:
		char city[50],state[50];
		int pin;
	public:
		void getAddress(){
			getData();
			getResult();
			cout<<"Enter the city of a student:"<<endl;
			cin>>city;
			
			
			cout<<"Enter the state of a student:"<<endl;
			cin>>state;
			
			
			cout<<"Enter the pin of a student:"<<endl;
			cin>>pin;
			
			
		}
		void showAddress(){
			showData();
			showResult();
			cout<<"Address"<<endl;
			cout<<"City:"<<city<<endl;
			cout<<"State: "<<state<<endl;
			cout<<"Pin = "<<pin<<endl;
			
			
			cout<<"___________________________________"<<endl;
			
		}
};	

int main(){
	Address obj;
	obj.getAddress();
	obj.showAddress();

}
