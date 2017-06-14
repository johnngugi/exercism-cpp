#include "etl.h"
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

map<char, int> etl::transform(map<int, vector<char> > a)
{
	map<char, int> store;

	map<int, vector<char> >::iterator itr1 = a.begin();
	map<int, vector<char> >::iterator itr2 = a.end();

	for (map<int, vector<char> >::iterator itr = itr1; itr != itr2; ++itr)
	{
		for (vector<char>::iterator it = (*itr).second.begin(); it != (*itr).second.end(); ++it)
		{
			store.insert(make_pair(tolower(*it), (*itr).first));
		}
	}
	return store;
}
