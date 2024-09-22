public class Solution {
    public boolean isValidSudoku(char[][] board) {
        for (int r = 0; r < board.length; r++) {
            for (int c = 0; c < board[0].length; c++) {
                if (board[r][c] != '.' && !isValidPlacement(board, board[r][c], r, c)) {
                    return false;
                }
            }
        }

        return true;
    }


    public static boolean isValidPlacement(char[][] board, char num, int row, int col) {
        return !isNumInRow(board, num, row, col) && !isNumInCol(board, num, row, col) && !isNumInBox(board, num, row, col);
    }


    public static boolean isNumInRow(char[][] board, char num, int row, int col) {
        for (int c = 0; c < board[0].length; c++) {
            if (c != col && board[row][c] == num) {
                return true;
            }
        }

        return false;
    }


    public static boolean isNumInCol(char[][] board, char num, int row, int col) {
        for (int r = 0; r < board.length; r++) {
            if (r != row && board[r][col] == num) {
                return true;
            }
        }

        return false;
    }


    public static boolean isNumInBox(char[][] board, char num, int row, int col) {
        int boxRow = row - row % 3;
        int boxCol = col - col % 3;

        for (int r = boxRow; r < boxRow+3; r++) {
            for (int c = boxCol; c < boxCol+3; c++) {
                if (r != row && c != col && board[r][c] == num) {
                    return true;
                }
            }
        }

        return false;
    }
}
