#include<iostream>

using namespace std;

class Date {

 
	int month, year, day;
	string str_month;
public:
	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
		
	}
	
	void display() {
		cout << day << "/" << month << "/" << year << endl;
	}
	
	void changeformat() {
		switch (month)
		{
		case 1:
			str_day = ""
		default:
			break;
		}
	}

	
};


int main() {
	
	Date d1(2, 1, 2003);

	d1.display();
	
	return 0;
}