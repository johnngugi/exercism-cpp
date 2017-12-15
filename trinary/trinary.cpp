#include "trinary.h"
#include <cctype>
#include <cmath>

namespace trinary
{
    int to_decimal(std::string n)
    {
        if (isalpha(n[n.length()-1]))
        {
            return 0;
        }

        int result, power = 0;
        int a = std::stoi(n);

        while(a > 0)
        {
            int last = a%10;
            result += last * pow(3, power);
            a /= 10;
            ++power;
        }

        return result;
    }   
}