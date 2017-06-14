#include "hamming.h"
#include <string>
#include <stdexcept>
#include <numeric>
#include <functional>
using namespace std;

int hamming::compute(string a, string b)
{

	if (a.size() != b.size())
		throw domain_error("Error");

	return inner_product(a.begin(), a.end(), b.begin(), 0,
		plus<unsigned>(), not_equal_to<int>());
}
