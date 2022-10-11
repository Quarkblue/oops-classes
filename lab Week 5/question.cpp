#include<iostream>
using namespace std;
class AddAmount
{
private:
	int amount = 50;
public:
	int x;
	AddAmount()
	{
		amount + x;
	}
	AddAmount(int a)
	{
		amount = a + amount;
	}
	void displayAmount()
	{
		cout << "\n" << amount;
	}
};
int main()
{
	AddAmount a;
	AddAmount b(40);
	a.displayAmount();
	b.displayAmount();
	return 0;
}