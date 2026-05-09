#include<iostream>
using namespace std;
class Complex{
	private:
			int real,img;
	public:
		void input(){
			cout<<"\n Real= ";
			cin>>real;
			cout<<"\n Img= ";
			cin>>img;
		
		}
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
			
		}
	friend Complex add(Complex C1,Complex C2){
	Complex t;
	t.real = C1.real + C2.real;
	t.img = C1.img+C2.img;
	
	return(t);
}
};



int main(){
	Complex C1,C2,res;
	C1.input();
	C2.input();
	
	cout<<"Inside object1\n";
	C1.output();
	cout<<"\nInside object2\n";
	C2.output();
	res = add(C1,C2);
	cout<<"\n After Addition\n";
	res.output();
	return 0;
}
