#include<iostream>

using namespace std;

class Room {
	
	int length, breadth, height;
	
public:
	
	Room(int l, int b, int h) {
		length = l;
		breadth = b;
		height = h;
	}

	int area() {
		int area = (2*(length * breadth)) + (2*(length * height)) + (2*(breadth * height));
		return area;
	}
	
	int volume() {
		int volume = length * breadth * height;
		return volume;
	}
	
};

int main() {

	Room r1(3, 10, 4);
	
	cout << "Area of room: " << r1.area() << endl;
	cout << "Volume of room: " << r1.volume() << endl;
	
	return 0;
}