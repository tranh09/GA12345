

#include <iostream>
#include <string>
using namespace std;

int main()
{ 
	int a, b, c;
		a = 5;
		b = 10;
		c = a++ + ++b + ++a - b-- + ++b;
		cout << "c = " << c << endl;
}

