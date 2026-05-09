#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int img;
	public:
		
		complex(int r=0,int i =0){
			real = r;
			img = i;
		}
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex calculate(complex c1, complex c2){
			complex temp;
			temp.real = c1.real+c2.real;
			temp.img = c1.img+c2.img;
			return temp;
		}
		~complex(){
		
			
		}
};
int main(){
	
	int r,i;
	cout<<"Enter the value of first complex number"<<endl;
	cin>>r>>i;
	complex c1(r,i);
	cout<<"Enter the value of second complex number"<<endl;
	cin>>r>>i;
	complex c2(r,i);
	
	cout<<"First Complex Number =";
	c1.output();
	
	cout<<"Second Complex Number =";
	c2.output();
	
	complex c3;
	c3 = c2.calculate(c1,c2);
	cout<<"Addition of 2 complex no is:";
	c3.output();
	

	
}
