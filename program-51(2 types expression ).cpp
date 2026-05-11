#include<iostream>
using namespace std;
class expression{
	private:
		int a;
	public:
		expression(int x=0){
			a = x;
		}
		void input(){
			cin>>a;
		}
		void output(){
			cout<<a;
		}
		expression operator *(int x){
			expression t;
			t.a = a * x	;
			return t;	
		}
		expression operator +(expression p){
			expression t;
			t.a = a + p.a;
			return t;
		}
};

int main(){
	expression a,b,res;
	
    cout<<"Enter value of a:"<<endl;
    a.input();

    cout<<"Enter value of b:"<<endl;
    b.input();

    res =a+(b*5);

    cout<<"Result is: ";
    res.output();

    return 0;
	
}
