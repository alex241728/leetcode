#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isValidSudoku(char** board, int boardSize, int* boardColSize);
bool isValid(char** board, int boardSize, int* boardColSize, int row, int col);
bool isValidInRow(char** board, int* boardColSize, int row, int col);
bool isValidInCol(char** board, int boardSize, int row, int col);
bool isValidInGrid(char** board, int row, int col);
char** createBoard(int boardSize, int boardColSize);
void printBoard(char** board, int boardSize, int boardColSize);
void printRow(char* row, int boardColSize);

int main() {
    int boardSize = 9;
    int boardColSize = 9;
    char** board = createBoard(boardSize, boardColSize);

    /*
        Input: board = 
        [["5","3",".",".","7",".",".",".","."]
        ,["6",".",".","1","9","5",".",".","."]
        ,[".","9","8",".",".",".",".","6","."]
        ,["8",".",".",".","6",".",".",".","3"]
        ,["4",".",".","8",".","3",".",".","1"]
        ,["7",".",".",".","2",".",".",".","6"]
        ,[".","6",".",".",".",".","2","8","."]
        ,[".",".",".","4","1","9",".",".","5"]
        ,[".",".",".",".","8",".",".","7","9"]]
        Output: true
    */
    board[0] = "53..7....";
    board[1] = "6..195...";
    board[2] = ".98....6.";
    board[3] = "8...6...3";
    board[4] = "4..8.3..1";
    board[5] = "7...2...6";
    board[6] = ".6....28.";
    board[7] = "...419..5";
    board[8] = "....8..79";
    printBoard(board, boardSize, boardColSize);
    printf("%d\n", isValidSudoku(board, boardSize, &boardColSize));

    /*
        Input: board = 
        [["8","3",".",".","7",".",".",".","."]
        ,["6",".",".","1","9","5",".",".","."]
        ,[".","9","8",".",".",".",".","6","."]
        ,["8",".",".",".","6",".",".",".","3"]
        ,["4",".",".","8",".","3",".",".","1"]
        ,["7",".",".",".","2",".",".",".","6"]
        ,[".","6",".",".",".",".","2","8","."]
        ,[".",".",".","4","1","9",".",".","5"]
        ,[".",".",".",".","8",".",".","7","9"]]
        Output: false
        Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
    */
    board[0] = "83..7....";
    printBoard(board, boardSize, boardColSize);
    printf("%d\n", isValidSudoku(board, boardSize, &boardColSize));

    free(board);

    return 0;
}

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for (int r = 0; r < boardSize; r++) {
        for (int c = 0; c < *boardColSize; c++) {
            if (board[r][c] != '.' && !isValid(board, boardSize, boardColSize, r, c)) {
                return false;
            }
        }
    }

    return true;
}

bool isValid(char** board, int boardSize, int* boardColSize, int row, int col) {
    return isValidInRow(board, boardColSize, row, col) && isValidInCol(board, boardSize, row, col) && isValidInGrid(board, row, col);
}

bool isValidInRow(char** board, int* boardColSize, int row, int col) {
    for (int c = 0; c < *boardColSize; c++) {
        if (c != col && board[row][c] == board[row][col]) {
            return false;
        }
    }
    return true;
}

bool isValidInCol(char** board, int boardSize, int row, int col) {
    for (int r = 0; r < boardSize; r++) {
        if (r != row && board[r][col] == board[row][col]) {
            return false;
        }
    }
    return true;
}

bool isValidInGrid(char** board, int row, int col) {
    int rowStart = row / 3 * 3;
    int colStart = col / 3 * 3;
    for (int deltaR = 0; deltaR < 3; deltaR++) {
        for (int deltaC = 0; deltaC < 3; deltaC++) {
            int r = rowStart + deltaR;
            int c = colStart + deltaC;
            if (row != r && col != c && board[r][c] == board[row][col]) {
                return false;
            }
        }
    }
    return true;
}

char** createBoard(int boardSize, int boardColSize) {
    char** board = (char**) malloc(sizeof(char*) * boardSize);
    return board;
}

void printBoard(char** board, int boardSize, int boardColSize) {
    printf("[\n");
    for (int r = 0; r < boardSize; r++) {
        printRow(board[r], boardColSize);
    }
    printf("]\n");
}

void printRow(char* row, int boardColSize) {
    printf("[");
    int c = 0;
    while (c < boardColSize - 1) {
        printf("%c, ", row[c]);
        c++;
    }
    printf("%c]\n", row[c]);
}