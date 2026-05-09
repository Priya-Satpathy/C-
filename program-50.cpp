#include<iostream>
using namespace std;

class Increment {
	private:
		int num;

	public:

		void input() {
			cout << "Enter the number: ";
			cin >> num;
		}

		void output() {
			cout << "The no is: " << num << endl;
		}

	 
		Increment operator ++ () {
			Increment t;

			t.num = num+1;

			return t;
		}
};

int main() {

	Increment I, res;

	cout << "Enter the  number you want increment" << endl;

	I.input();
	I.output();

	res = ++I;

	cout << endl << "The no after increment is" << endl;

	res.output();

	return 0;
}
