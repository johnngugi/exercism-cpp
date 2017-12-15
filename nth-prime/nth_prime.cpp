#include <vector>
#include <algorithm>
#include <stdexcept>
#include "nth_prime.h"

using namespace std;

namespace prime {

    int nth(int n) {

        if (n < 1) throw std::domain_error("out of range");
        vector<int> primes = {2, 3};

        for (int i = primes.back() + 2; primes.size() < n; i+=2) {
            if (all_of(primes.begin(), primes.end(), [i](int f) { return i%f != 0;}))
                primes.push_back(i);
        }

        return primes[n-1];
    }
}
