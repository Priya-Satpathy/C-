//with para and without return
#include<iostream>
using namespace std;
void checkPrime(int n)
{
	int c =0, i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"The no is prime";
	}
	else{
		cout<<"The no is composite";
	}
}
int main(){
	int n;
	cout<<"Enter no:";
	cin>>n;
	checkPrime(n);
}
