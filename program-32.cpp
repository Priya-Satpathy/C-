#include<iostream>
using namespace std;
class Time{
	private:
			int h,m,s;
	public:
		void input(){
			cout<<"\nh= ";
			cin>>h;
			cout<<"\nm= ";
			cin>>m;
			cout<<"\ns= ";
			cin>>s;
		}
		void output(){
			cout<<"\nh= "<<h;
			cout<<"\nm= "<<m;
			cout<<"\ns= "<<s;
		}
	friend Time Sum(Time p,Time q){
	Time t;
	t.h = (p.h+q.h)+(p.m+q.m)/60;
	t.m = (p.m+q.m)%60+(p.s+q.s)/60;
	t.s = (p.s+q.s)%60;
	
	return(t);
}
};



int main(){
	Time t1,t2,res;
	t1.input();
	t2.input();
	
	cout<<"Inside object1\n";
	t1.output();
	cout<<"\nInside object2\n";
	t2.output();
	res = Sum(t1,t2);
	cout<<"\n After Addition\n";
	res.output();
	return 0;
}
