#include "say.h"
#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

namespace say
{
    vector<string> ones = {"", "-one", "-two", "-three", "-four", "-five", "-six", 
    "-seven", "-eight", "-nine"};

    vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen"};

    vector<string> tens = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"};

    string say_tens(unsigned long long number)
    {
        if (number < 20)
        {
            if (number < 10)
            {
                size_t length = ones[number].length();
                size_t pos = ones[number].find_first_of("-") + 1;

                if (pos > length)
                {
                    pos = length;
                }

                return ones[number].substr(pos);
            }

            return teens[number%10];
        }

        return tens[number/10] + ones[number%10];
    }

    string say_hundreds(unsigned long long number)
    {
        if (number < 100)
        {
            return say_tens(number);
        }

        string result = say_tens(number/100) + " hundred ";
        result += say_tens(number%100);

        if(result.at(result.size() - 1) == ' ')
            result.pop_back();

        return result;
    }

    string say_thousands(unsigned long long number)
    {
        if (number < 1000)
        {
            return say_hundreds(number);
        }

        string result = say_hundreds(number/1000) + " thousand ";
        result += say_hundreds(number%1000);

        if(result.at(result.size() - 1) == ' ')
            result.pop_back();

        return result;
    }

    string say_millions(unsigned long long number)
    {
        if (number < 1000000)
        {
            return say_thousands(number);
        }

        string result = say_thousands(number/1000000) + " million ";
        result += say_thousands(number%1000000);

        if(result.at(result.size() - 1) == ' ')
            result.pop_back();

        return result;
    }

    string say_billions(unsigned long long number)
    {
        if (number < 1000000000)
        {
            return say_millions(number);
        }

        string result = say_millions(number/1000000000) + " billion ";
        result += say_thousands(number%1000000000);

        if(result.at(result.size() - 1) == ' ')
            result.pop_back();

        return result;
    }

    string in_english(unsigned long long number)
    {
        if(number > 999999999999)
            throw domain_error("Too big");
        
        if(number < 0)
            throw domain_error("Too small");

        if (number == 0)
        {
            return "zero";
        }

        if (number < 100)
        {
            return say_tens(number);
        }
        else if (number < 1000)
        {
            return say_hundreds(number);
        }
        else if (number < 1000000)
        {
            return say_thousands(number);
        }
        else if (number < 1000000000)
        {
            return say_millions(number);
        }
        else
            return say_billions(number);
    }
}
