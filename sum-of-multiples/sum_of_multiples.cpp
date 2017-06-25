#include "sum_of_multiples.h"
#include <map>
#include <numeric>
using namespace std;

void get_sum(int first, int limit, map<int, int> &temp_map)
{
    for (int i = first; i < limit; ++i)
    {
        if (i%first == 0)
        {
            temp_map.insert(make_pair(i, i));
        }
    }
}



int sum_of_multiples::to(list<int> l, int n)
{
    map<int, int> numbers;

    list<int>::iterator it2 = l.end();

    for (list<int>::iterator it1 = l.begin(); it1 != it2; ++it1)
    {
        get_sum(*it1, n, numbers);
    }

    const size_t result = accumulate(numbers.begin(), numbers.end(),
        0, [] (int previous, std::map<int, int>::value_type &p) { return previous + p.second; });

	return result;
}
