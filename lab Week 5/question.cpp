#include<iostream>
#include<string.h>
using namespace std;
class func
{
public:
	void pal(char c[]);
};
void func::pal(char c[])
{
	int l = strlen(c);
	char b[10];
	int i, j;
	for (i = 0, j = l - 1; i < l; i++, j--)
	{
		b[i] = c[j];
	}
	b[i] = ' ';
	if (strcmp(c, b) == 0)
	{
		cout << "\nThe entered text is palindrome";
	}
	else
	{
		cout << "\n the entered text is not a palindrome";
	}
}
int main()
{
	char c[10];
	func p;
	cout << "\nEnter the string to be checked" << endl;
	cin >> c;
	p.pal(c);
	return 0;
}
