import java.util.List;
import java.util.ArrayList;

public class Solution {
    private static void appendRange(List<String> ranges, int startNum, int endNum) {
        if (startNum == endNum) {
            ranges.add(String.format("%d", startNum));
        }
        else {
            ranges.add(String.format("%d->%d", startNum, endNum));
        }
    }

    public List<String> summaryRanges(int[] nums) {
        int len = nums.length;

        if (len == 0) {
            return new ArrayList<>();
        }

        List<String> ranges = new ArrayList<>();
        int startNum = nums[0];
        int endNum = nums[0];
        for (int i = 1; i < len; i++) {
            int currentNum = nums[i];
            int previousNum = nums[i-1];
            if (currentNum == previousNum + 1) {
                endNum = nums[i];
            }
            else {
                appendRange(ranges, startNum, endNum);
                startNum = nums[i];
                endNum = nums[i];
            }
        }

        appendRange(ranges, startNum, endNum);

        return ranges;
    }
}
