#include<iostream>
using namespace std;
class Time{
	private:
			int hr,min,sec;
	public:
		void input(){
			cout<<"Enter the Time in hour,min & sec= ";
			cin>>hr>>min>>sec;
			
		
		}
		void output(){
			cout<<hr<<"hr"<<min<<"min"<<sec<<"sec";
			
		}
		Time operator + (Time p) {
			Time t ;
        	t.sec = (sec+p.sec)%60;
        	t.min = (min+p.min)%60+(sec+p.sec)/60;
        	t.hr = (hr+p.hr)+(min+p.min)/60;
        	
	

        return t;
    }


};



int main(){
	Time T1,T2,res;

	
	cout<<"Enter first Time"<<endl;
	T1.input();
	cout<<"\nEnter second Time"<<endl;
	T2.input();
	res = T1+T2;
	cout<<endl<<"After Addition"<<endl;
	res.output();
	return 0;
}
