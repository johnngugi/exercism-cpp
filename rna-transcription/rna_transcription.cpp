#include "rna_transcription.h"
#include <algorithm>

using namespace std;

namespace transcription
{
    std::map<char, char> rna = {
        {'G', 'C'},
        {'C', 'G'},
        {'T', 'A'},
        {'A', 'U'}
    };

    char to_rna(char dna)
    {
        return rna[dna];
    }

    string to_rna(string dna)
    {
        string result;

        transform(dna.begin(), dna.end(), back_inserter(result), [](char c){return rna[c];});

        return result;
    }
}
