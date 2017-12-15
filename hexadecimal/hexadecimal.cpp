#include <cmath>
#include <map>
#include "hexadecimal.h"

using namespace std;

namespace hexadecimal {

    int convert(string hex_num) {
        int sum = 0;

        for (char c : hex_num) {
            sum <<= 4;
            if ('0' <= c && c <= '9') {
                sum += c - '0';
            }
            else if ('a' <= c && c <= 'f') {
                sum += 10 + (c - 'a');
            }
            else if ('A' <= c && c <= 'F') {
                sum += 10 + (c - 'A');
            }
            else {
                return 0;
            }
        }
        return sum;
    }
}
