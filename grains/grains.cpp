#include "grains.h"
#include <cmath>

namespace grains
{
    const long long a = 1;
    const long long r = 2;

    unsigned long long square(int n)
    {
        unsigned long long result;

        result = a * pow(r, (n-1));
        return result;
    }

    unsigned long long total()
    {
        unsigned long long result;
        int i = 1;

        result = (a * (1-(pow(r, 64))))/(1-r);

        return result;
    }
}