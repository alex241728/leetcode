import java.util.Arrays;
import java.util.Random;

public class RandomizedSet {
    private int[] arr;
    private int capacity;
    private int size;

    public RandomizedSet() {
        capacity = 10;
        arr = new int[capacity];
        size = 0;
    }

    public RandomizedSet(int capacity) {
        this.capacity = capacity;
        arr = new int[this.capacity];
        size = 0;
    }

    public int[] getArr() {
        return arr;
    }

    public boolean insert(int val) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
                return false;
            }
        }

        if (size == capacity) {
            capacity *= 2;
            arr = Arrays.copyOf(arr, capacity);
        }

        arr[size++] = val;
        return true;
    }

    public boolean remove(int val) {
        if (size == 0) {
            return false;
        }

        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
                arr[i] = arr[size - 1];
                size--;
                return true;
            }
        }
        return false;
    }

    public int getRandom() {
        Random random = new Random();
        int randomIdx = random.nextInt(size);
        return arr[randomIdx];
    }
}
