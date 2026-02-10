#include<iostream>
using namespace std;
class student{
	private:
		int roll,sub1,sub2,sub3,total;
		float per;
		char name[50];
		void calculate(){
			total=sub1+sub2+sub3;
			per=float(total)/300*100;
		}
	public:
		void input()
		{
			cout<<"Enter your roll:";
			cin>>roll;
			cin.get();
			cout<<"Enter your name:";
			cin.getline(name,50);
			cout<<"Enter three different sub marks:";
			cin>>sub1>>sub2>>sub3;
			
		}
		void output(){
			calculate();
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll<<endl;
			cout<<"Total: "<<total<<endl;
			cout<<"Percentage: "<<per<<endl;
		}
		
};

int main(){
	student s1;
	student s2;
	student s3;
	
	s1.input();
	s2.input();
	s3.input();
	
	s1.output();
	s2.output();
	s3.output();
	
	return 0;
}
