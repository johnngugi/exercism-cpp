#include "binary.h"
#include <cmath>
#include <cctype>

using namespace std;

namespace binary
{
    int convert(string n)
    {

        if (isalpha(n[n.length()-1]))
        {
            return 0;
        }

        int sum = 0;
        int power = 0;
        long int n_to_int = stol(n);

        while(n_to_int > 0)
        {
            int last = n_to_int%10;
            sum += last * pow(2, power);
            n_to_int /= 10;
            ++power;
        }

        return sum;
    }   
}
