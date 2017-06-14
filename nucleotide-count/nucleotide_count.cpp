#include "nucleotide_count.h"
#include <stdexcept>
using namespace dna;
using namespace std;

bool counter::check_valid_char(char letter) const
{
	string valid = "ATGC";
	if (valid.find(letter) == string::npos)
	{
		throw std::invalid_argument("error");
	}
	return true;
}

bool counter::not_exists(char x)
{
	return nucleotide_count.find(x) == nucleotide_count.end();
}

counter::counter(string a)
{
	strand = a;
	nucleotide_count['A'] = 0;
	nucleotide_count['C'] = 0;
	nucleotide_count['T'] = 0;
	nucleotide_count['G'] = 0;

	for (int i = 0; i < a.length(); ++i)
	{
		if (not_exists(a[i]) && check_valid_char(a[i]))
		{
			nucleotide_count.insert(make_pair(a[i], 1));
		}
		else
		{
			++nucleotide_count[a[i]];
		}
	}
}

int counter::count(char letter) const
{
	if(check_valid_char(letter))
		return nucleotide_count.find(letter)->second;
}

map<char, int> counter::nucleotide_counts() const
{
	return nucleotide_count;
}
