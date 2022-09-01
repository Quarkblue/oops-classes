#include<iostream>

using namespace std;

class Student {
	string name;
	double cgpa;
	int numOfBacklogs;

public:
	Student(string a, double b, int c) {
		name = a;
		cgpa = b;
		numOfBacklogs = c;
	}

	~Student() {
		delete& this->name;
		delete& this->cgpa;
		delete& this->numOfBacklogs;
	}
	
	// NO backlogs
	// cgpa more than 9

	void checkForPlacement() {
		if (numOfBacklogs == 0 && cgpa > 9.0) {
			cout << name << " is eligible for placements" << endl;
		}
		else {
			cout << name << " is not eligible for placements" << endl;
		}
	}

};

int main() {

	string nameOfstudent;
	double cgpa;
	int numOfBacklogs;

	cout << "Name of student: ";
	cin >> nameOfstudent;
	cout << "CGPA of student: ";
	cin >> cgpa;
	cout << "Number of backlogs of student: ";
	cin >> numOfBacklogs;
	
	Student student1(nameOfstudent, cgpa, numOfBacklogs);
	
	student1.checkForPlacement();
	
	return 0;
}