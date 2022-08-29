#include<iostream>
#include<string>

using namespace std;

class Date {
private:
	string str_month;
	string str_date;

public:
	int date;
	int month;
	int year;
	
	Date(int x, int y, int z) {
		date = x;
		month = y;
		year = z;
	}
	
	void convert_month() {

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
	}
	
	void convert_date() {
		switch (date%10)
		{
		case 1:
			str_date = to_string(date) + "st ";
			break;
		case 2:
			str_date = to_string(date) + "nd ";
			break;
		case 3:
			str_date = to_string(date) + "rd ";
			break;
		default:
			str_date = to_string(date) + "th ";
			break;
		}
	}

	void convert_format() {
		this->convert_date();
		this->convert_month();
		
		cout << str_date + str_month << " " << year << endl;
	}
	
	
};


int main() {

	int date, month, year;
	
	cin >> date >> month >> year;

	Date test(date, month, year);
	
	test.convert_format();
	
	return 0;
}
