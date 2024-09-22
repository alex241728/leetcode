from typing import List, Self


class Solution:
    def isValidInRow(self: Self, board: List[List[str]], row: int, col: int) -> bool:
        row: List[str] = board[row]
        for c in range(len(row)):
            if c != col and row[col] == row[c]:
                return False
        return True
    
    def isValidInCol(self: Self, board: List[List[str]], row: int, col: int) -> bool:
        for r in range(len(board)):
            if r != row and board[row][col] == board[r][col]:
                return False
        return True
    
    def isValidInGrid(self: Self, board: List[List[str]], row: int, col: int) -> bool:
        rStart: int = row // 3 * 3
        cStart: int = col // 3 * 3
        for deltaR in range(3):
            for deltaC in range(3):
                r: int = rStart + deltaR
                c: int = cStart + deltaC
                if r != row and c != col and board[r][c] == board[row][col]:
                    return False
        return True

    def isValid(self: Self, board: List[List[str]], row: int, col: int) -> bool:
        return self.isValidInRow(board, row, col) and self.isValidInCol(board, row, col) and self.isValidInGrid(board, row, col)
    
    def isValidSudoku(self: Self, board: List[List[str]]) -> bool:
        for r in range(len(board)):
            for c in range(len(board[r])):
                if board[r][c] != '.' and not self.isValid(board, r, c):
                    return False
        return True