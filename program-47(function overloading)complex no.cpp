#include<iostream>
using namespace std;
class Complex{
	private:
			int real,img;
	public:
		void input(){
			cout<<"Enter the Real Part= ";
			cin>>real;
			cout<<"Enter The Imginary part= ";
			cin>>img;
		
		}
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
			
		}
		Complex operator + (Complex c2) {
			Complex t;
        	t.real = real + c2.real;
			t.img = img+c2.img;
	

        return t;
    }


};



int main(){
	Complex C1,C2,res;

	
	cout<<"Enter first complex"<<endl;
	C1.input();
	cout<<"\nEnter second complex"<<endl;
	C2.input();
	res = C1+C2;
	cout<<endl<<"After Addition"<<endl;
	res.output();
	return 0;
}
