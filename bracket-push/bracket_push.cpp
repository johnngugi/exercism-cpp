#include <stack>
#include <algorithm>
#include <iostream>
#include <vector>
#include "bracket_push.h"

namespace bracket_push {

    bool are_matching(char opening, char closing) {
        if(opening == '(' && closing == ')') return true;
        else if(opening == '{' && closing == '}') return true;
        else if(opening == '[' && closing == ']') return true;
        return false;
    }

    bool check(std::string text) {
        std::stack<char> braces;

        for (char i : text) {
            if (i == '(' || i == '{' || i == '[') braces.push(i);
            else if (i == ')' || i == '}' || i == ']') {
                if (braces.empty() || !are_matching(braces.top(), i)) return false;
                else braces.pop();
            }
        }

        return braces.empty();
    }
}
