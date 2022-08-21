// Week 1 lab Exercise
// Calculator Menu


#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void add(int* x, int* y) {
	*x = *x + *y;
}

void sub(int* x, int* y) {
	*x = *x - *y;
}

void mul(int* x, int* y) {
	*x = *x * *y;
}

void div(int* x, int* y) {
	*x = *x / *y;
}

void mod(int* x, int* y) {
	*x = *x % *y;
}

int main() {
	int x, y, choice;
	cout << "CALCULATOR" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;

	cout << "Choose 1 option : ";
	
	cin >> choice;
	cout << endl;
	
	cout << "Enter two numbers with space: ";
	cin >> x >> y;
	cout << endl;
	
	cout << "Result: ";
	
	switch (choice)
	{
	case 1:
		add(&x, &y);
		cout << x << endl;
		break;
	case 2:
		sub(&x, &y);
		cout << x << endl;
		break;
	case 3:
		mul(&x, &y);
		cout << x << endl;
		break;
	case 4:
		div(&x, &y);
		cout << x << endl;
		break;
	case 5:
		mod(&x, &y);
		cout << x << endl;
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
	
	return 0;
}
