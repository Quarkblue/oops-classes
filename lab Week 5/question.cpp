#include <iostream>
#include <string>
# include <vector>
class student
{
public:
	std::string ss;
	std::string name;
	student(std::string ss)
	{
		name = ss;
	}
	student()
	{
		name = "unknown";
	}
};
class prasad
{
public:
	static void main(std::vector<std::string>& args)
	{
		student* obj = new student();
		obj->ss = "abc";
		std::cout << obj->ss << std::endl;
		std::cout << obj->name << std::endl;
	}
};
int main(int argc, char** argv) {
	std::vector<std::string> parameter(argv + 1, argv + argc);
	prasad::main(parameter);
	return 0;
}