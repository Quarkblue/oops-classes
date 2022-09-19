#include<iostream>

using namespace std;

class Triangle {

	private:
		int side1, side2, side3;
	public:
		Triangle()
		{
			side1 = 3;
			side2 = 4;
			side3 = 5;
		}

		int perimeter() {
			return side1 + side2 + side3;
		}
		
		int area()
		{
			
			int s = (side1 + side2 + side3) / 2;
			
			int area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
			
			return area;
		}
};

int main() {

	Triangle t1;
	
	cout << "Perimeter of the triangle: " << t1.perimeter() << endl;
	cout << "Area of the triangle: " << t1.area() << endl;

	return 0;
}