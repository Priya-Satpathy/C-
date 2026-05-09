#include<iostream>
using namespace std;

class Test {
	private:
    	float area;

public:

    // Cube
    void fun1(float side) {
        area = 6 * side * side;
        cout << "\nArea of Cube = " << area;
    }

    // Cuboid
    void fun1(float l, float b, float h) {
        area = 2 * (l*b + b*h + l*h);
        cout << "\nArea of Cuboid = " << area;
    }

    // Cylinder
    void fun1(float r, float h, int x) {
        area = 2 * 3.14 * r * (r + h);
        cout << "\nArea of Cylinder = " << area;
    }
};

int main() {
    Test t;

    t.fun1(3);           // Cube
    t.fun1(4, 5, 6);     // Cuboid
    t.fun1(2, 5, 1);     // Cylinder

    return 0;
}
