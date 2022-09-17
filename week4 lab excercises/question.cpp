#include<iostream>
#include<map>

using namespace std;

class Date {


	int month, year, day;
	string str_month;
	map<int, int> nOdays{
		{1,31},
		{2,28},
		{3,31},
		{4,30},
		{5,31},
		{6,30},
		{7,31},
		{8,31},
		{9,30},
		{10,31},
		{11,30},
		{12,31}
	};
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
			str_month = "January";
			break;
		case 2:
			str_month = "February";
			break;
		case 3:
			str_month = "March";
			break;
		case 4:
			str_month = "April";
			break;
		case 5:
			str_month = "May";
			break;
		case 6:
			str_month = "June";
			break;
		case 7:
			str_month = "July";
			break;
		case 8:
			str_month = "August";
			break;
		case 9:
			str_month = "September";
			break;
		case 10:
			str_month = "October";
			break;
		case 11:
			str_month = "November";
			break;
		case 12:
			str_month = "December";
			break;
		default:
			break;
		}
		cout << day << "-" << str_month << "-" << year << endl;
	};

	void dateAfterOneWeek() {
		{
			
			if (nOdays.find(month)->second == 30) {
				if (day + 7 > 30) {
					day = day + 7 - 30;
					month++;
				}
				else {
					day = day + 7;
				}
			}
			else if (nOdays.find(month)->second == 31) {
				if
			}
			
			/*day = day + 7;
			if (day > 30) {
				month = month + 1;
				day = day - 30;
			}
			if (month > 12) {
				year = year + 1;
				month = month - 12;
			}
			cout << da*/y << "/" << month << "/" << year << endl;
		}
	}

};


int main() {
	
	Date d1(2, 1, 2003);

	d1.display();
	
	return 0;
}