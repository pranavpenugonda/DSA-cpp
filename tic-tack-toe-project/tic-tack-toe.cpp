#include <iostream>
#include <vector>
using namespace std;

class TicTacToe {
private:
    vector<vector<char> > board;
    char currentPlayer;

public:
    TicTacToe() : board(3, vector<char>(3, '-')), currentPlayer('X') {}

    // Print the current state of the board
    void printBoard() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Check if the board is full
    bool isBoardFull() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '-')
                    return false;
            }
        }
        return true;
    }

    // Check if there is a winner
    bool checkWinner() const {
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-')
                return true;
        }

        // Check columns
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '-')
                return true;
        }

        // Check diagonals
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')
            return true;

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')
            return true;

        return false;
    }

    // Make a move
    void makeMove(int row, int col) {
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid move. Try again." << endl;
            return;
        }

        if (board[row][col] != '-') {
            cout << "Cell already occupied. Try again." << endl;
            return;
        }

        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Play the game
    void play() {
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "Player 1: X, Player 2: O" << endl;
        cout << "To win the game make sure to enter symbol either in row/column/diagonal 3times and they should form a line"<<endl;
        cout << "The board is numbered from 0 to 2 (row, col)." << endl;

        int row, col;
        while (!checkWinner() && !isBoardFull()) {
            cout << "Current Board:" << endl;
            printBoard();

            int playerNum = (currentPlayer == 'X') ? 1 : 2;
            cout << "Player " << playerNum << ", enter your move (row col): ";
            cin >> row >> col;

            makeMove(row, col);
        }

        cout << "Final Board:" << endl;
        printBoard();

        if (checkWinner()) {
            int winner = (currentPlayer == 'X') ? 2 : 1;
            cout << "Congratulations! Player " << winner << " wins!" << endl;
        } else {
            cout << "It's a draw!" << endl;
        }
    }
};

int main() {
    TicTacToe game;
    game.play();

    return 0;
}

