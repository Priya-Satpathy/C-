#include<iostream>
using namespace std;

class Test {
	private:
    	float a;

public:

    // Circle
    void fun1(float r) {
        a = 3.14 * r * r;
        
        cout << "\nArea of Circle = " << a;
    }

    // Rectangle
    void fun1(float l, float b) {
        a = l * b;
        
        cout << "\nArea of Rectangle = " << a;
    }

    // Triangle
    void fun1(float bs, float h, int x) {
        a = 0.5 * bs * h;
        
        cout << "\nArea of Triangle = " << a;
    }
};

int main() {
    Test t1, t2, t3;

    t1.fun1(7);        
    t2.fun1(6, 9);     
    t3.fun1(4, 6, 1);  

    return 0;
}
