#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
	public:
		void inOut(){
			cout<<"Enter roll number:";
	cin>>roll;
	cin.get();

	cout<<"Enter your name:";
	cin.getline(name,50);

	cout<<"Roll number = "<<roll<<endl;
	cout<<"Name = "<<name<<endl;
		}
};
int main(){
	student s;
	s.inOut();	
}
