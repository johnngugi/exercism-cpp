#ifndef ALLERGIES_H
#define ALLERGIES_H

#include <string>
#include <map>
#include <unordered_set>

namespace allergies {

    class allergy_test {
    private:
        int allergy_score;

        const int EGGS = 1;
        const int PEANUTS = 2;
        const int SHELLFISH = 4;
        const int STRAWBERRIES = 8;
        const int TOMATOES = 16;
        const int CHOCOLATE = 32;
        const int POLLEN = 64;
        const int CATS = 128;

        std::map<std::string, int> allergens = {
                {"eggs", EGGS},
                {"peanuts", PEANUTS},
                {"shellfish", SHELLFISH},
                {"strawberries", STRAWBERRIES},
                {"tomatoes", TOMATOES},
                {"chocolate", CHOCOLATE},
                {"pollen", POLLEN},
                {"cats", CATS}
        };

    public:
        allergy_test(int score) : allergy_score(score) {};
        bool is_allergic_to(std::string);
        std::unordered_set<std::string> get_allergies();
    };

}

#endif //ALLERGIES_H
