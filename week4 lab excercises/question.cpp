#include<iostream>
using namespace std;
class pyramid
{
private:
	int r, T4Tutorials, SHOW, n, no;
public:
	pyramid()  //constructor
	{
		no = 5;
		n = no;
	}
	void sol()
	{
		for (r = 1; r <= no; r++)
		{
			for (T4Tutorials = 1; T4Tutorials <= n; T4Tutorials++)
			{
				cout << " ";
			}
			n--;
			for (SHOW = 1; SHOW <= r; SHOW++)
			{
				cout << " " << r;
			}
			cout << endl;
		}
	}
	~pyramid()  //destructor
	{
		cout << endl << "object destroyed";
	}
};
int main()
{
	pyramid ob;
	ob.sol();
}