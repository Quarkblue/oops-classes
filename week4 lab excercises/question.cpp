#include<iostream>

using namespace std;

class Circle {
	int radius;

public:
	Circle(int r){
		radius = r;
	}

	int calcPerimeter() {
		int perimeter = 2 * 3.14 * radius;
		
		return perimeter;
	}
	int calcArea() {
		int area = 3.14 * radius * radius;

		return area;
	}
	
};

int main() {

	Circle c1(5);
	
	cout << "The perimeter of the circle is: " << c1.calcPerimeter() << endl;
	cout << "The area of the circle is: " << c1.calcArea() << endl;
	
	return 0;
}
