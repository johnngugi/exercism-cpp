#include "sieve.h"

using namespace std;

namespace sieve
{
    vector<int> primes(int n)
    {
        std::vector<bool> prime(n,true);
        std::vector<int> results;

        for (int p=2; p*p<=n; p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true)
            {
                // Update all multiples of p
                for (int i=p*2; i<=n; i += p)
                    prime[i] = false;
            }
        }

        for (int i = 2; i < n; ++i)
        {
            if (prime[i])
            {
                results.push_back(i);
            }
        }

        return results;
    }
}
