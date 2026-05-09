#include<iostream>
using namespace std;
class Address{
	protected:
		char city[50],state[50];
		int pin;
	public:
		void getAddress(){
		
			cout<<"Enter the city of a student:"<<endl;
			cin>>city;
			
			
			cout<<"Enter the state of a student:"<<endl;
			cin>>state;
			
			
			cout<<"Enter the pin of a student:"<<endl;
			cin>>pin;
			
			
		}
		void showAddress(){
		
			cout<<"Address"<<endl;
			cout<<"City:"<<city<<endl;
			cout<<"State: "<<state<<endl;
			cout<<"Pin = "<<pin<<endl;
			
			
			cout<<"___________________________________"<<endl;
			
		}
};	
class Student:public Address{
	private:
		int roll;
		char name[50];
	
	public:
		void getData(){
			cout<<"Enter roll number:"<<endl;
			cin>>roll;
			cin.get();
			
		
			cout<<"Enter your name:"<<endl;
			cin.getline(name,50);
			getAddress();
			
		}
		void showData(){
			cout<<"Roll number = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
			showAddress();
			cout<<"___________________________________"<<endl;
			
		
		}
};

class Teacher:public Address{
		private:
			char name[50],subject[50];
		public:
			void getInfo(){
				
			
				cout<<"Enter teacher name="<<endl;
				cin>>name;
				cout<<"Enter Subject name ="<<endl;
				cin>>subject;
				
				
				cout<<"___________________________________"<<endl;
				
			}
			
			void findInfo(){
			
				cout<<"Name = "<<name<<endl;
				cout<<"Subject Name = "<<subject<<endl;
				
				
				cout<<"___________________________________"<<endl;
			}
};
	

int main(){
	Student obj1;
	Teacher obj2;
	obj1.getData();
	obj2.getInfo();
	
	obj1.showData();
	obj2.findInfo();

}
