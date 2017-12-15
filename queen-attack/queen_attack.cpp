#include <sstream>
#include "queen_attack.h"

using namespace std;

namespace queen_attack {
    typedef std::pair<int, int> square;

    square chess_board::white() const {
        return white_queen;
    }

    square chess_board::black() const {
        return black_queen;
    }

    bool chess_board::can_attack() const {
        int white_queen_row = white_queen.first;
        int white_queen_column = white_queen.second;
        int black_queen_row = black_queen.first;
        int black_queen_column = black_queen.second;
        int rows = abs(white_queen_row - black_queen_row);
        int columns = abs(white_queen_column - black_queen_column);

        if (white_queen_row == black_queen_row) { return true;}
        if (white_queen_column == black_queen_column) { return true;}

        return rows == columns;
    }

    chess_board::operator std::string() const {
        stringstream chessBoard;
        for (int i = 0; i <= 7; i++) {
            for (int j = 0; j <= 7; j++) {
                square current = std::make_pair(i, j);
                if (current == white_queen) {
                    chessBoard << 'W';
                } else if (current == black_queen) {
                    chessBoard << 'B';
                } else {
                    chessBoard << '_';
                }
                if (j < 7) {
                    chessBoard << ' ';
                }
            }
            chessBoard << endl;
        }
        return chessBoard.str();
    }
}
