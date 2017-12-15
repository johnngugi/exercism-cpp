#include "series.h"
#include <stdexcept>

using namespace std;

namespace series {

    vector<int> digits(string num) {
        vector<int> result = {};

        for (char i : num) {
            result.push_back(i - '0');
        }
        return result;
    }

    vector<vector<int>> slice(string num, int n) {

        if (n > num.length()) {
            throw domain_error("Not enough digits to slice");
        }

        vector<int> numbers = digits(num);
        auto begin = numbers.begin();
        auto end = numbers.end();

        vector<vector<int>> result;

        for (auto i = begin; i != ((end+1)-n); i++) {
            result.emplace_back(i, i+n);
        }

        return result;
    }
}
