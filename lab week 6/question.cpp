#include <iostream>
using namespace std;
class region {
public:
	int volumes;
	float volume(int a) {
		return a * a * a;
	}
	float volume(float radius, float height) {
		return 3.14 * radius * radius * height;
	}
	float volume(double radius) {
		return (3.14 * 4 * radius * radius * radius) / 3;
	}
};
int main() {
	region x;
	cout << x.volume(3) << endl;
	cout << x.volume(3.0, 2.0) <<endl;
	cout << x.volume(4.0);
	return 0;
}