#include <iostream>
using namespace std;

// Note: Yes, O will win at the 7th step however much X may try. 
// This structure developed on the board will give more than one winning possibility for O, 
// and at the same time, X can't block them.

void displayBoard(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 1) cout << "O";
            else if (board[i][j] == -1) cout << "X";
            else cout << "%";
        }
        cout << endl;
    }
}

bool checkWin(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0)
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0)
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0)
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0)
        return true;
    return false;
}

int main() {
    int board[3][3] = {0};
    int turn = 1;
    int moves = 0;
    while (moves < 9) {
        displayBoard(board);
        cout << (turn == 1 ? "O's turn" : "X's turn") << ". Enter row and column: ";
        int row, col;
        cin >> row >> col;
        if (board[row][col] == 0) {
            board[row][col] = turn;
            if (checkWin(board)) {
                displayBoard(board);
                cout << (turn == 1 ? "O wins!" : "X wins!") << endl;
                return 0;
            }
            turn = -turn;
            moves++;
        } else {
            cout << "Invalid move! Try again.";
        }
    }
    displayBoard(board);
    cout << "It's a tie!" << endl;
    return 0;
}
