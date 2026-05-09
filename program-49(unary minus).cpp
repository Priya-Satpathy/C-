#include<iostream>
using namespace std;

class Unary {
	private:
		int u;

	public:

		void input() {
			cout << "Enter the number: ";
			cin >> u;
		}

		void output() {
			cout << "The no is: " << u << endl;
		}

	
		Unary operator - () {
			Unary t;

			t.u = -u;

			return t;
		}
};

int main() {

	Unary U, res;

	cout << "Enter the unary number" << endl;

	U.input();

	res = -U;

	cout << endl << "After unary - operator the no is" << endl;

	res.output();

	return 0;
}
