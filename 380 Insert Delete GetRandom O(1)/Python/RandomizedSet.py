import random
from typing import Dict, List, Self


class RandomizedSet:
    arr: List[int]
    idxMap: Dict[int, int]

    def __init__(self: Self):
        self.arr = []
        self.idxMap = {}

    def search(self, val: int) -> bool:
        return val in self.idxMap
    
    def insert(self, val: int) -> bool:
        if self.search(val):
            return False
    
        self.arr.append(val)
        self.idxMap[val] = len(self.arr) - 1
        return True

    def remove(self, val: int) -> bool:
        if not self.search(val):
            return False
        
        idx: int = self.idxMap[val]
        self.arr[idx] = self.arr[-1]
        self.idxMap[self.arr[idx]] = idx
        self.arr.pop()
        del self.idxMap[val]
        return True

    def getRandom(self) -> int:
        return random.choice(self.arr)