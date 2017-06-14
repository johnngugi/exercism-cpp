#include "food_chain.h"
#include <vector>
#include <iostream>
using namespace std;

string key_word[] = {
	"",
	"fly",
	"spider",
	"bird",
	"cat",
	"dog",
	"goat",
	"cow",
	"horse"
};

string second_line[] = {
	"",
	"a fly.\n",
	"a spider.\nIt wriggled and jiggled and tickled inside her.\n",
	"a bird.\nHow absurd to swallow a bird!\n",
	"a cat.\nImagine that, to swallow a cat!\n",
	"a dog.\nWhat a hog, to swallow a dog!\n",
	"a goat.\nJust opened her throat and swallowed a goat!\n",
	"a cow.\nI don't know how she swallowed a cow!\n",
	"a horse.\nShe's dead, of course!"
};

string first_sentence = "I know an old lady who swallowed";

string ending = "I don't know why she swallowed the fly. Perhaps she'll die.\n";

string food_chain::repetition(int n)
{
	vector<string> responses;
	string final = "";
	for (int i = n; i > 1; --i)
	{
		responses.push_back("She swallowed the " + key_word[i] + " to catch the " + key_word[i-1]+ ".\n");
	}
	responses.at(responses.size()-2) = "She swallowed the bird to catch the spider that "\
	"wriggled and jiggled and tickled inside her.\n";

	for (int j = 0; j < responses.size(); ++j)
	{
		final += responses[j];
	}

	return final;
}

string food_chain::response(int n)
{
	string response = "";
	if (n == 2)
	{
		response += "She swallowed the " + key_word[n] + " to catch the " + key_word[n-1]+ ".\n";
	}
	else if (n > 2 && n < 8)
	{
		response += repetition(n);
	}

	return response;
}


string food_chain::verse(int n)
{
	string result = "";

	if (n < 8)
		result += first_sentence + " " + second_line[n] + response(n) + ending;
	else
		result += "I know an old lady who swallowed a horse.\nShe's dead, of course!\n";

	cout << result << endl;

	return result;
}

string food_chain::verses(int a, int b)
{
	string result = "";
	result += food_chain::verse(a) + "\n" + food_chain::verse(b) + "\n";

	cout << result << endl;

	return result;
}

string food_chain::sing()
{
	return food_chain::verses(1, 8);
}
