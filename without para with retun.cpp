//without para and with return
#include<iostream>
using namespace std;
int checkPrime()
{
	int n,c=0,i;
	cout<<"Enter no:";
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	return c;

}
int main(){
	int m;
	m = checkPrime();
	if(m==2){
		cout<<"The no is prime";
	}
	else{
		cout<<"The no is composite";
	}
}
