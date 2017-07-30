#include "crypto_square.h"
#include <algorithm>
#include <cctype>
#include <exception>
#include <iostream>

namespace crypto_square
{
    cipher::cipher(std::string text)
    {
        initial = text;
    }

    std::string cipher::normalize_plain_text()
    {
        std::string result;

        std::copy_if(initial.begin(), initial.end(), std::back_inserter(result), isalnum);
        std::transform(result.begin(), result.end(), result.begin(), tolower);

        initial = result;

        return result;
    }

    unsigned int cipher::calculate_size(std::string text)
    {
        int column, row;
        size_t text_length = text.length();

        for (int i = 1; i*i <= text_length; ++i)
        {
            column = i;
        }

        if(text_length > (column*column))
        {
            ++column;
        }

        return column;
    }

    unsigned int cipher::size()
    {
        return this->calculate_size(this->normalize_plain_text());
    }

    const std::vector<std::string> cipher::create_segments(std::string text)
    {
        unsigned int size = this->calculate_size(text);
        std::vector<std::string> segments;

        for (int i = 0; i < text.length(); i += size)
        {
            segments.push_back(text.substr(i, size));
        }

        return segments;
    }

    const std::vector<std::string> cipher::plain_text_segments()
    {
        return this->create_segments(this->normalize_plain_text());
    }

    std::string cipher::cipher_text()
    {
        const std::vector<std::string> segments = this->plain_text_segments();
        int rows = segments.size();
        int columns = segments[0].length();

        std::string result = "";

        for (int column = 0; column < columns; ++column)
        {
            for (int row = 0; row < rows; ++row)
            {
                try
                {
                    result += segments.at(row).at(column);
                }
                catch(std::exception &e)
                {
                    continue;
                }
            }
        }

        return result;
    }

    std::string cipher::normalized_cipher_text()
    {
        const std::vector<std::string> segments = this->create_segments(this->cipher_text());

        std::string result = segments[0];

        for (int i = 1; i < segments.size(); ++i)
        {
            result += " " + segments[i];
        }

        return result;
    }
}
