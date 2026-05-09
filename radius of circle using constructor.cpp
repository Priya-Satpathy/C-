#include<iostream>
using namespace std;
class Circle{
	private:
		float pi,radius,area;
		void calculate(){
			area = pi*radius*radius;
		}
	public:
		Circle(){
			cout<<"Constructor named"<<endl;
			pi = 3.141;
		}
		void input(){
			cout<<"Enter the radius of a circle:";
			cin>>radius;
		}
		void output(){
			calculate();
			cout<<"Area of the circle :"<<area;
		}
};
int main(){
	Circle obj;

	obj.input();

	obj.output();
}
