#include<iostream>

using namespace std;

int next_fabbonaci_num() {

	static int last;
	static int last_one = 1;

	int next = last + last_one;
	last_one = last;
	last = next;
	return last;
	
}

int main() {

	int count;

	cin >> count;
	
	for (int i = 0; i < count; i++) {
		cout << next_fabbonaci_num() << " ";
	}

	return 0;
}