#include<iostream>
using namespace std;
class Demo{
	public:
		virtual void function1(){
			cout<<"Inside function1() of class Demo"<<endl;
		}
};
class Derieved:public Demo{
	public:
		
		void function1(){
			cout<<"Inside function1() of Derieved class"<<endl;
		}
		void function2(){
			cout<<"Inside function2() of Derieved Class"<<endl;
		}
};
int main(){
	Demo *p;
	p = new Demo;
	
	(*p).function1();
	delete p;
	
	p = new Derieved;
	

	
	(*p).function1();
	(*p).function2();
}
