#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Str {
	
	string s;
	
public:
	void get_Str() {
		cout << "Input the string: ";
		cin >> s;
	}
	
	void print_Str() {
		for_each(s.begin(), s.end(), [](char &c)
			{
				c = ::toupper(c);
			});
		
		cout << "The string in upper case: " << s << endl;

		for_each(s.begin(), s.end(), [](char& c)
			{
				c = ::tolower(c);
			});
		
		cout << "The string in lower case: " << s << endl;
		
	}

};

int main() {

	Str s1;
	
	s1.get_Str();
	s1.print_Str();

	return 0;
}