#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Inside constructor"<<endl;
		}
		~A(){
			cout<<"Inside destructor"<<endl;
		}
};
int main(){
	A obj1;
	return 0;
}
