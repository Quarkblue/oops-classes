#include <iostream>
#include <string>
using namespace std;
class Bank
{
public:
	int balance;
	int getBalance()
	{
		return balance;
	}
	void setBalance(int i) {
		balance = i;
	}
};
class BankA : public Bank
{
public:
	int getBalance(int balance)
	{
		return balance;
	}
};
class BankB : public Bank
{
public:
	int getBalance(int balance)
	{
		return balance;
	}

};
class BankC : public Bank
{
public:
	int getBalance(int balance)
	{
		return balance;
	}

};
int main() {
	Bank A;
	A.balance = 1000;
	cout << "$" << A.getBalance() << endl;
	A.setBalance(1000);

	Bank B;
	B.balance = 1500;
	cout << "$" << B.getBalance() << endl;
	B.setBalance(1500);

	Bank C;
	C.balance = 2000;
	cout << "$" << C.getBalance() << endl;
	C.setBalance(2000);
}