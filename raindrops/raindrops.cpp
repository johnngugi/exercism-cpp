#include "raindrops.h"
#include <map>

using namespace std;

namespace raindrops
{
    std::map<int, string> values = {
        {3, "Pling"},
        {5, "Plang"},
        {7, "Plong"}
    };

    string convert(int n)
    {
        string result;

        if (n%3 == 0)
        {
            result.append(values[3]);
        }

        if (n%5 == 0)
        {
            result.append(values[5]);
        }

        if (n%7 == 0)
        {
            result.append(values[7]);
        }

        if (result.empty())
        {
            result = std::to_string(n);
        }

        return result;
    }
}