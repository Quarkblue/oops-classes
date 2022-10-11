#include <iostream>
using namespace std;
class shape {
public:
	int area() {};
	int cal_area(int length, int breadth) {
		return length * breadth;
	}
	int cal_area(int side) {
		return side * side;
	}
};
int main() {
	shape fo{};
	cout << fo.cal_area(3, 4) << endl;
	cout << fo.cal_area(5);
	return 0;
}
