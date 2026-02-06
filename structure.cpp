#include<iostream>
using namespace std;
class student{
	int roll;
	char name[50];
};
int main(){
	student s;
	cout<<"Enter roll number:";
	cin>>s.roll;
//	cin.get();
	fflush(stdin);
	cout<<"Enter your name:";
//	cin.getline(s.name,50);
	gets(s.name);
	cout<<"Roll number = "<<s.roll<<endl;
	cout<<"Name = "<<s.name<<endl;
}
