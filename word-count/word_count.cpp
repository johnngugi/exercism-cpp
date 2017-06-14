#include <string>
#include <map>
#include <iostream>
#include "word_count.h"
using namespace std;

map<string, int> word_count::words(string sen)
{
	string store;
	map<std::string, int> words;

	for (char c : sen)
	{
		if (isalnum(c))
		{
			store += tolower(c);
		}
		else if (c == '\'' && store.length() > 0)
		{
			store += c;
		}
		else if (store.length() > 0)
		{
			if (store.back() == '\'')
			{
				store.erase(store.size() - 1);
			}
			if (words.count(store) > 0)
			{
				++words[store];
			}
			else
			{
				words[store] = 1;
			}
			store = "";
		}
	}

	if (store.length() > 0) {
		if (store.back() == '\'')
		{
			store.erase(store.size() - 1);
		}
		if (words.count(store) > 0)
		{
			++words[store];
		}
		else
		{
			words[store] = 1;
		}
	}

	return words;
}
