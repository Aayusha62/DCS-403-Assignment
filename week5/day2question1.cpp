#include <iostream>
using namespace std;

const int N = 8;

// Function to check if it is safe to place a queen at board[row][column]
bool isSafe(int board[N][N], int row, int col) {
    // Check column above
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
        if (board[i][j]) return false;

    return true;
}

// Recursive function to solve the problem
bool solveEightQueens(int board[N][N], int row) {
    if (row == N) return true; // All queens placed

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; // Place queen
            if (solveEightQueens(board, row + 1)) return true;
            board[row][col] = 0; // Backtrack
        }
    }

    return false; // No valid placement found in this row
}

// Function to print the board
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int board[N][N] = {0};

    if (solveEightQueens(board, 0))
        printBoard(board);
    else
        cout << "No solution exists" << endl;

    return 0;
}
