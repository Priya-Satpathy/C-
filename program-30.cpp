#include<iostream>
using namespace std;
class addition{
	private:
		int num;
	public:
		void input(){
			cout<<"Enter a number:";
			cin>>num;
		}
		void output(){
			cout<<num;
		}
		addition add(addition p){
			addition t;
			t.num = num + p.num;
			return(t);
		}
};

int main(){
	additi on t1,t2,res;
	t1.input();
	t2.input();
	res = t1.add(t2);
	res.output();
	return 0;
}
