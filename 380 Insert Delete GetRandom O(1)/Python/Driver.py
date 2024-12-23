from RandomizedSet import RandomizedSet


class Driver:
    if __name__ == "__main__":
        """_summary_
            Input
            ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
            [[], [1], [2], [2], [], [1], [2], []]
            Output
            [null, true, false, true, 2, true, false, 2]

            Explanation
            RandomizedSet randomizedSet = new RandomizedSet();
            randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
            randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
            randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
            randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
            randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
            randomizedSet.insert(2); // 2 was already in the set, so return false.
            randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.
        """
        randomizedSet: RandomizedSet = RandomizedSet()

        print(randomizedSet.insert(1))
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.remove(2))
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.insert(2))
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.getRandom())
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.remove(1))
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.insert(2))
        print(randomizedSet.arr, randomizedSet.idxMap)

        print(randomizedSet.getRandom())
        print(randomizedSet.arr, randomizedSet.idxMap)