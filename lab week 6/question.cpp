#include <iostream>
using namespace std;
class change {
	void swap(int& a, int& b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	void swap(float& a, float& b) {
		float temp;
		temp = a;
		a = b;
		b = temp;
	}
};
int main() {
	int a, b;
	float c, d;
	cin >> a >> b;
	cin >> c >> d;
	swap(a, b);
	swap(c, d);
	cout << a << " " << b << endl;
	cout << c << " " << d;
	return 0;
}