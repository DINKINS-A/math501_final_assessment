#pragma once

/*
GameBoard defines enums and structures for the Onitama
 - BOARD_SQUARE_STATE used for pawns
 - GameBoard to represent a 5x5 game board
 - GameAction to represent an action taken by a player (i.e. P1 moves pawn to row 1, col 2)

*/

#include <vector>

// define enum's and structs used in the game

// BOARD_SQUARE_STATE used for markers
enum BOARD_SQUARE_STATE { UNOCCUPIED, OCCUPIED_BY_P1, OCCUPIED_BY_P2 };

struct GameBoard {

private:
    int m_board_width;
    int m_board_height;
    std::vector<BOARD_SQUARE_STATE> m_board;

public:
    GameBoard();

    BOARD_SQUARE_STATE GetBoardSquare(int row, int col) const;
    void SetBoardSquare(int row, int col);

};

//GameAction to represent an action taken by a player (i.e. move pawn to row 1, col 2)
struct GameAction {

private:
    int m_row;
    int m_col;
    BOARD_SQUARE_STATE m_player_move;

    GameAction(int row, int col, BOARD_SQUARE_STATE player_move);
    GameAction();

    bool operator==(const GameAction& rhs) const;

};