#include "robot_name.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace robot_name;

string robot::gen_letters()
{
	string result;

	result += (char)(rand() % 25 + 65);
	
	return result;
}

string robot::gen_numbers()
{
	string result;

	result += to_string(rand() % 10);

	return result;
}

string robot::make_name()
{
	string current;
	int random;

	for (int i = 0; i < 5; ++i)
	{
		if (i == 0 || i == 1)
			current += gen_letters();
		else
			current += gen_numbers();
	}

	return current;
}

string robot::name() const
{
	return final_name;
}

void robot::reset()
{
	final_name.clear();
	final_name = make_name();
}

robot::robot()
{
	final_name = make_name();
	cout << final_name << endl;
}
