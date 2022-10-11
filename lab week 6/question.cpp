#include <iostream>
#include <string.h>
using namespace std;
class func {
public:
	void pal(int);
};
void func::pal(int n) {
	int n1, sum, a;
	n1 = n;
	sum = 0;
	do {
		sum = sum * 10;
		a = n % 10;
		sum = sum + a;
		n = n / 10;
	} while (n > 0);
	if (sum == n1) {
		cout << "\n It is palindrome";
	}
	else {
		cout << "\n It is not a palindrome";
	}
}
int main() {
	int k, r, v;
	func p;
	do {
	cout << "Palidrome" << endl;
		cin >> r;
		switch (r) {
		case 1:
			cout << "Enter the Number";
			cin >> k;
			p.pal(k);
			break;
		}
			cout << ”Do you want to continue ? (1 / 0)” << endl;
			cin >> v;
		} while (v == 1);
		return 0;
	}