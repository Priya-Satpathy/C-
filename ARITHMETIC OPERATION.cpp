#include<iostream>
using namespace std;
int addition(int a,int b){
	return (a+b);
}
int substraction(int a,int b){
	return (a-b);
}
int multiplication(int a,int b){
	return (a*b);
}
int division(int a,int b){
	if(b!=0){
			return (a/b);
			
	}

}
int mod(int a,int b){
	if(b!=0){
			return(a%b);
	}
	
	
}

void display(int result){
	cout<<"The result is :"<<result;
}
int main()
{
	int a,b,ch,result;
	cout<<"ARITHMETIC OPERATION"<<endl;
	cout<<"1.ADDITION"<<endl;
	cout<<"2.SUBSTRACTION"<<endl;
	cout<<"3.MULTIPLICATION"<<endl;
	cout<<"4.DIVISION"<<endl;
	cout<<"5.MODULUS"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	if(ch>=1 && ch<=5){
		cout<<"Enter 2 nos:";
		cin>>a>>b;
		if(ch==1){
			result = addition(a,b);
		}
		else if(ch==2){
			result = substraction(a,b);
		}
		
		else if(ch==3){
			result = multiplication(a,b);
		}
		
		else if(ch==4){
			result = division(a,b);
		}
		
		else{
			result = mod(a,b);
		}
		display(result);
	}
	else
		cout<<"Enter choice between 1 to 5";
}
