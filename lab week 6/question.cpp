#include<iostream>
using namespace std;
class Num {
	int a;
public:
	Num() {
	}
	void getvalue() {
		cout << "Enter the Number: ";
		cin >> a;
	}
	void operator++() {
		a = ++a;
	}
	void operator--() {
		a = --a;
	}
	int print() {
		return a;
	}
};
int main() {

	Num obj;
	obj.getvalue();
	++obj;
	cout << "Incremented Number: " << obj.print() << endl;

	--obj; --obj;
	cout << "Decremented Number: " << obj.print() << endl;
	return 0;
}
