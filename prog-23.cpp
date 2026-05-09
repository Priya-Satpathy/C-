#include<iostream>
using namespace std;
class circle{
	private:
		float pi,rad,area;
		calculate(){
			area=pi*rad*rad;
		}
	public:
		circle(){
			pi=3.141;
		}
		void assign(int r){
			rad=r;
		}
		void output(){
			calculate();
			cout<<"Area is "<<area;
		}
};

int main(){
	circle obj;
	float radius;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	obj.assign(radius);
	obj.output();
	return 0;
}
