from typing import List, Self


class Solution:
    def isValidInRow(self: Self, board: List[List[str]], i: int, val: int) -> bool:
        for digit in board[i]:
            if digit != "." and int(digit) == val:
                return False
        return True

    def isValidInCol(self: Self, board: List[List[str]], j: int, val: int) -> bool:
        for i in range(0, 9):
            digit: str = board[i][j]
            if digit != "." and int(digit) == val:
                return False
        return True

    def isValidInGrid(self: Self, board: List[List[str]], i: int, j: int, val: int) -> bool:
        iStart: int = i // 3 * 3
        jStart: int = j // 3 * 3
        for deltaI in range(0, 3):
            for deltaJ in range(0, 3):
                digit: str = board[iStart + deltaI][jStart + deltaJ]
                if digit != "." and int(digit) == val:
                    return False
        return True

    def solve(self: Self, board: List[List[str]]) -> bool:
        for i in range(9):
            for j in range (9):
                if board[i][j] == ".":
                    for val in range(1, 10):
                        if self.isValidInRow(board, i, val) and self.isValidInCol(board, j, val) and self.isValidInGrid(board, i, j, val):
                            board[i][j] = str(val)
                            if self.solve(board):
                                return True
                            board[i][j] = "."
                    return False
        return True

    def solveSudoku(self: Self, board: List[List[str]]) -> None:
        self.solve(board)