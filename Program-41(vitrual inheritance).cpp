#include<iostream>
using namespace std;
class One{
	public:
		void function1(){
			cout<<"Inside function1() of class one"<<endl;
		}
};
class Two{
	public:
		function1();
		void function1(){
			cout<<"Inside function1() of class two"<<endl;
		}
		void function2(){
			cout<<"Inside function2() of class two"<<endl;
		}
};
int main(){
	One obj1;
	Two obj2;
	
	obj2.function1();
	obj2.function2();
}
