#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <utility>
#include <stdexcept>

namespace queen_attack {

    class chess_board {
    private:
        typedef std::pair<int, int> square;
        square white_queen;
        square black_queen;

    public:
        chess_board() : white_queen({0, 3}), black_queen({7, 3}) {};
        chess_board(square white, square black) :
        white_queen(std::move(white)), black_queen(std::move(black)) {
            if (white == black) {
                throw std::domain_error("cannot have queens in same position");
            }
        };
        square white() const;
        square black() const;
        bool can_attack() const;
        operator std::string() const;


    };

}

#endif //QUEEN_ATTACK_H
