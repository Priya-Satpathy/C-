#include<iostream>
using namespace std;  
class student{
	private:
		int roll;
		char name[50],college[50];
	public:
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
			cout<<"Enter name of student:";
			cin.getline(name,50);
			cout<<"Enter name of college:";
			cin.getline(college,50);
		}   
		void output(){
			    
			cout<<"Name =  "<<name<<endl;
			cout<<"Roll No =  "<<roll<<endl;
			cout<<"College name =  "<<college<<endl;
		}
	
};
int main(){
	student s[5];
	int i;
	
	for(i=0;i<5;i++){
		s[i].input();
	}
	
	for(i=0;i<5;i++){
		s[i].output();
	}
	return 0;
}
