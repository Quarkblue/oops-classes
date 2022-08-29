#include<iostream>

using namespace std;

// swap numbers in cyclic order
void swap(int *a, int *b, int *c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main() {

	int a, b, c;
	
	cin >> a >> b >> c;
	
	cout << "Values as (A), (B), (C): " << a << b << c << endl;
	
	swap(&a, &b, &c);
	
	cout << "Values after cyclic swap as (A), (B), (C): " << a << b << c << endl;

	return 0;
}


