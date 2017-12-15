#include <algorithm>
#include <vector>
#include "pangram.h"

namespace pangram {

    bool is_pangram(std::string text) {

        std::vector<bool> exists (26, false);

        for (char &c : text) {
            if (isalpha(c)) {
                exists[tolower(c) - 'a'] = true;
            }
        }

        return std::all_of(exists.begin(), exists.end(), [](bool b) { return b;});
    }
}
