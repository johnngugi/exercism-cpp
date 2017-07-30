#ifndef _CRYPTO_SQUARE_H
#define _CRYPTO_SQUARE_H

#include <string>
#include <vector>

namespace crypto_square
{
    class cipher
    {
    private:
        std::string initial; // need a better name
    public:
        cipher(std::string);
        std::string normalize_plain_text();
        unsigned int calculate_size(std::string);
        unsigned int size();
        const std::vector<std::string> plain_text_segments();
        const std::vector<std::string> create_segments(std::string);
        std::string cipher_text();
        std::string normalized_cipher_text();
    };   
}

#endif
