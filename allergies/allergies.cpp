#include "allergies.h"

namespace allergies {

    bool allergy_test::is_allergic_to(std::string allergen) {
        return static_cast<bool>(allergy_score & allergens[allergen]);
    }

    std::unordered_set<std::string> allergy_test::get_allergies() {
        std::unordered_set<std::string> values;

        for (auto &allergen : allergens) {
            std::string first = allergen.first;
            if (is_allergic_to(first)) { values.insert(first); };
        }
        return values;
    }
}
