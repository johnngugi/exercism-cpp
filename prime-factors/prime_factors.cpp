#include "prime_factors.h"
#include <cmath>

namespace prime_factors
{
    std::vector<int> of(int a)
    {
        std::vector<int> results;

        for (int candidate = 2; a > 1; candidate++)
        {
            for(; a%candidate == 0; a/=candidate)
            {
                results.push_back(candidate);
            }
        }

        return results;
    }
}
