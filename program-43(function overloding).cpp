#include<iostream>
using namespace std;
class Calculate{
	private:
		int r,l,br,bs,h,area;
	public:
	
		void area(float r){
			area = 3.14*r*r;
			return area;
		}
		void area(float l,float br){
			area = l*b;
			return area;
		}
		void area(float bs,float h){
			area = 0.5*bs*h;
			return area;
		}
};
int main(){
	Calculate c;
	Calculate r;
	Calculate t;
	c.area(7);
	r.area(6,9);
	t.area(4,6);
	
}
