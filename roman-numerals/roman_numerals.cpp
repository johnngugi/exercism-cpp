#include "roman_numerals.h"
#include <map>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

namespace roman
{
    vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    vector<string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    vector<string> thousands = {"", "M", "MM", "MMM"};

    map<string, vector<string> > values = {
        {"ones", ones},
        {"tens", tens},
        {"hundreds", hundreds},
        {"thousands", thousands}
    };

    string convert(int n)
    {
        string items[] = {"ones", "tens", "hundreds", "thousands"};

        vector<string> store;
        vector<string>::iterator it = store.begin();
        int remainder;

        ostringstream stream;

        for(auto i : items)
        {
            remainder = n%10;
            n /= 10;

            it = store.insert(it, values[i][remainder]);
        }

        std::copy(store.begin(), store.end(), ostream_iterator<string>(stream));

        return stream.str();
    }
}