#include<iostream>
using namespace std;
class Copy{
	private:
		int x,y;
	public:
		Copy(int x,int y){
			(*this).x = x;
			(*this).y = y;
			
		}
		Copy(Copy &obj){
			x = obj.x;
			y = obj.y;
		}
		void print(){
			cout<<"\n x = "<<x;
			cout<<"\n y = "<<y;
		}
		
		
};
int main(){
	Copy obj1(10,20);
	Copy obj2(obj1);
	obj1.print();
	obj2.print();
	return 0;
}
