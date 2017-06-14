#include "anagram.h"
#include <string>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <iostream>
using namespace std;

vector<string> anagram::anagram::matches(vector<string> v)
{
	vector<string> result;
	int word_value = 0;
	for (int i = 0; i < anagram::anagram::word.length(); i ++)
	{
		word_value += int(anagram::anagram::word.at(i));
	}

	for (int j = 0; j < v.size(); ++j)
	{
		int current_value = 0;
		for (int k = 0; k < v[j].length(); ++k)
		{
			current_value += int(v[j].at(k));
		}

		if (current_value == word_value)
		{
			result.push_back(v[j]);
		}
	}

	return result;
}
