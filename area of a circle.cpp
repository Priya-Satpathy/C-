#include<iostream>
using namespace std;
class Circle{
	private:
		float pi,radius,area;
	public:
		void input(){
			cout<<"Enter the radius of a circle:";
			cin>>radius;
		}
		void calculate(){
			area = pi*radius*radius;
		}
		void init(){
			pi = 3.141;
		}
		void output(){
			cout<<"Area of the circle :"<<area;
		}
};
int main(){
	Circle obj;
	obj.init();
	obj.input();
	obj.calculate();
	obj.output();
}
