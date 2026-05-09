#include<iostream>
using namespace std;
class Height{
	private:
			int feet,inch;
	public:
		void input(){
			cout<<"\nFeet= ";
			cin>>feet;
			cout<<"\nInch= ";
			cin>>inch;
		
		}
		void output(){
			cout<<"\nFeet= "<<feet<<endl;
			cout<<"\nInch= "<<inch<<endl;
			
		}
	friend Height add(Height h1,Height h2){
	Height t;
	t.inch = (h1.inch+h2.inch)%12;
	t.feet = (h1.feet+h2.feet)+	(h1.inch+h2.inch)/12;
	return(t);
}
};



int main(){
	Height t1,t2,res;
	t1.input();
	t2.input();
	
	cout<<"Inside object1\n";
	t1.output();
	cout<<"\nInside object2\n";
	t2.output();
	res = add(t1,t2);
	cout<<"\n After Addition\n";
	res.output();
	return 0;
}
