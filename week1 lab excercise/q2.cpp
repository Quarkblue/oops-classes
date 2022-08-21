// Week 1 lab Exercise
// divisiblilty check

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int num;
	
	for (num = 1000; num <= 2000; num++) {
		if (num % 5 == 0 && num % 7 == 0) {
			cout << num << endl;
		}
	}

	return 0;
}

