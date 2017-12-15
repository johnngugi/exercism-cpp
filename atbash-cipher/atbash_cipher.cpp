#include <map>
#include <algorithm>
#include <sstream>
#include "atbash_cipher.h"

using namespace std;

namespace atbash {

    char letters(char c) {
        if (isdigit(c)) {
            return c;
        } else if (c >= 'a' && c <= 'z') {
            return 'z' - (c - 'a');
        } else if (c >= 'A' && c <= 'Z') {
            return 'z' - (c - 'A');
        }
    }

    string cipher(string text) {
        ostringstream result;

        for (auto& c : text) {
            if (isalnum(c))
                result << letters(c);
        }

        return result.str();
    }

    string encode(string text) {
        string store = cipher(std::move(text));
        ostringstream result;

        for (int i = 0; i != store.length(); i++) {
            result << store[i];

            if ((i + 1) % 5 == 0 && (i + 1) != store.length())
                result << " ";
        }

        return result.str();
    }

    string decode(string text) {
        return cipher(std::move(text));
    }
}
