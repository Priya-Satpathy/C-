 #include<iostream>
using namespace std;  
class complex{
	private:
		int real;
		int img;
		
	public:
		complex(){}
		complex(int r, int imge){
			real = r;
			img = imge;
		}
		complex calculate(complex c1, complex c2){
			complex temp;
			temp.real = c1.real + c2.real;
			temp.img = c1.img + c2.img;
			return temp;
		} 
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		~complex(){}
		
};
int main(){
	
	
	int real1,img1,real2,img2;
	cout<<"Enter the numbers for first Complex number:"<<endl;
	cout<<"Enter the real part :";
	cin>>real1;
	cout<<"Enter the imaginary part:";
	cin>>img1;
	cout<<"Enter the numbers for second Complex number:"<<endl;
	cout<<"Enter the real part :";
	cin>>real2;
	cout<<"Enter the imaginary part:";
	cin>>img2;
	
	complex c1(real1,img1);
	complex c2(real2,img2);
	complex c3;


	cout<<"First complex number= ";
	c1.output();
	cout<<"Second complex number= ";
	c2.output();
	
	c3 = c3.calculate(c1,c2);
	cout<<"The sum of two complex numbers are:";
	c3.output();
	return 0;
}
