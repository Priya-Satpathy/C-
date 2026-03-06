#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int img;
	public:
		void input(){
			cout<<"Enter the real part:";
			cin>>real;
			cout<<"Enter the imaginary part:";
			cin>>img;
			
		}
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main(){
	complex c1,c2;
	cout<<"Enter the value of first complex number"<<endl;
	c1.input();
	cout<<"Enter the value of second complex number"<<endl;
	c2.input();
	cout<<"First Complex Number =";
	c1.output();
	cout<<"Second Complex Number =";
	c2.output();
	
}
