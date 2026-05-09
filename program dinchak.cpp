#include<iostream>
using namespace std;

class Calculate {
private:
    float area;

public:
  
    void areaCal(float r) {
        area = 3.14 * r * r;
        cout << "Circle Area = " << area << endl;
    }

    
    void areaCal(float l, float br) {
        area = l * br;
        cout << "Rectangle Area = " << area << endl;
    }

    
    void areaCal(float bs, float h, int) {
        area = 0.5 * bs * h;
        cout << "Triangle Area = " << area << endl;
    }
};

int main() {
    Calculate c;

    c.areaCal(7);        
    c.areaCal(6, 9);     
    c.areaCal(4, 6, 1);  

    return 0;
}
