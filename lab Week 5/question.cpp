#include<iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
double sum(double x, double y)
{
	return x + y;
}
int sum(int x, int y, int z)
{
	return x + y + z;
}
int main()
{
	int a, b;
	cout << "Enter the Two numbers:";
	cin >> a >> b;
	cout << "The Sum of two integers: " << sum(a, b) << endl;
	cout << "The Sum of two floats: " << sum(11.5, 23.6) << endl;
	cout << "The Sum of three integers: " << sum(15, 42, 33) << endl;
}