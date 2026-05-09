#include<iostream>
using namespace std;
class addition{
	private:
		int a,b,c;
	public:
		void input(){
			cout<<"\na= ";cin>>a;
			cout<<"\nb= ";cin>>b;
			cout<<"\nc= ";cin>>c;
		}
		void output(){
			cout<<"\na= "<<a;
			cout<<"\nb= "<<b;
			cout<<"\nc= "<<c;
		}
		addition add(addition p){
			addition t;
			t.a = a + p.a;
			t.b = b + p.b;
			t.c = c + p.c;
			return(t);
		}
};

int main(){
	addition t1,t2,res;
	t1.input();
	t2.input();
	cout<<"Inside object1\n";
	t1.output();
	cout<<"\nInside object2\n";
	t2.output();
	res = t1.add(t2);
	cout<<"\n-
	
	After Addition\n";
	res.output();
	return 0;
}
