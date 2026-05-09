#include<iostream>
using namespace std;

class Calculate {
private:
    float area;

public:
   
    float areaCal(float r) {
        area = 3.14 * r * r;
        return area;
    }

   
    float areaCal(float l, float br) {
        area = l * br;
        return area;
    }

   
    float areaCal(float bs, float h,int ) {
        area = 0.5 * bs * h;
        return area;
    }
};

int main() {
	 Calculate c;
    Calculate r;
    Calculate t;
    c.areaCal(7);
    r.areaCal(12,4);
    t.areaCal(4,6,1);
    
    
//    Calculate c;
//    
//
//    cout << "Circle Area = " << c.areaCal(7) << endl;
//    cout << "Rectangle Area = " << c.areaCal(12,4) << endl;
//    cout << "Triangle Area = " << c.areaCal(4,6,1) << endl;

    return 0;
}
