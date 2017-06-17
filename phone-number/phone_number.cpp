#include "phone_number.h"
#include <iostream>
#include <cctype>
using namespace std;

phone_number::phone_number(const string n)
{
	for (int i = 0; i < n.length(); ++i)
	{
		if (isdigit(n[i]))
		{
			final += n[i];
		}
	}
}

string phone_number::check_valid(string n) const
{
	int num_length = n.length();

	if (num_length == 11)
	{
		if (n[0] == '1')
		{
			n.erase(0, 1);
		}
		else
		{
			n = "0000000000";
		}
	}
	else if (num_length < 10 || num_length > 11)
	{
		n = "0000000000";
	}

	return n;
}

string phone_number::area_code() const
{
	return check_valid(final).substr(0, 3);
}

phone_number::operator std::string() const
{
	string s = number();
	return "(" + area_code() + ") " + s.substr(3, 3) + "-" + s.substr(6, std::string::npos);
}

string phone_number::number() const
{
	return check_valid(final);
}
