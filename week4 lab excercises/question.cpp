#include<iostream>

using namespace std;

class Average {
public:
	static float calcAverage(int a, int b, int c)
	{
			float average = (a + b + c) / 3;
			return average;
	}
	
};

int main() {

	int x, y, z;
	
	cout << "Enter three numbers: ";
	
	cin >> x >> y >> z;
	
	cout << "Average of the numbers: " << Average::calcAverage(x, y, z) << endl;
	
	return 0;
}