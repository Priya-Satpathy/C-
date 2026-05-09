#include<iostream>
#include<string.h>
using namespace std;

class String {
	private:
    	char str[100];

public:
    
    void getString();
    void showString();

   
    String operator + (String s) {
        String temp;

        strcpy(temp.str, str);
        strcat(temp.str, s.str);

        return temp;
    }

};

void String::getString() {
    cin.getline(str, 100);
}

void String::showString() {
    cout <<"Concatenated String = "<< str << endl;
}

int main() {
    String s1, s2, s3;
    
    cout <<"Enter first string:";
    s1.getString();

    cout <<"Enter second string:";
    s2.getString();

    s3 = s1 + s2;

    s3.showString();

    return 0;
}
