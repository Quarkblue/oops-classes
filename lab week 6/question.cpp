#include <iostream>
using namespace std;
class complex {
public:
	int real;
	int imag;
	complex() {
		int real = 0;
		int imag = 0;
	}
	complex(int a, int b) {
		real = a;
		imag = b;
	}
	int display() {
		cout << real << "+";
		cout << imag << "i";
		return 1;
	}
	complex operator+(complex c2) {
		complex c3;
		c3.real = real + c2.real;
		c3.imag = imag + c2.imag;
		return c3;
	}
};
int main() {
	complex x(10, 10);
	complex y(70, 20);
	complex z;
	z = x + y;
	z.display();
	return 0;
}