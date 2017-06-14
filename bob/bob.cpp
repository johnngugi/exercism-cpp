#include "bob.h"
#include <string>
#include <cctype>
using namespace std;

string bob::hey(string statement)
{
	string result = "";
	string::iterator current = statement.begin();
	string::iterator end = statement.end();

	bool spaces_only = true;
	bool all_uppercase = true;
	bool empty_string = true;
	bool has_question_mark = false;

	for (current; current != end; ++current)
	{
		if (spaces_only && !isspace(*current))
		{
			spaces_only = false;
		}

		if (all_uppercase && isalpha(*current))
		{
			if (!isupper(*current))
				all_uppercase = false;
		}

		if (empty_string && isalpha(*current))
			empty_string = false;

		if (!spaces_only && !all_uppercase)
			break;
	}

	if (spaces_only)
		return "Fine. Be that way!";
	else if (all_uppercase && !empty_string)
		return "Whoa, chill out!";

	for (string::reverse_iterator it = statement.rbegin(); it != statement.rend(); ++it)
	{
		if (*it == '?')
		{
			has_question_mark = true;
			break;
		}
		else if(!isspace(*it))
			break;
	}

	if (has_question_mark)
		return "Sure.";

	result = "Whatever.";
	return result;
}

// int main()
// {
// 	cout << bob::hey("Tom-ay-to, tom-aaaah-to") << endl;
// }
