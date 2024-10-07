public class Solution {
    public int maxPoints(int[][] points) {
        if (points.length == 1) {
            return 1;
        }

        int max = 2;
        for (int i = 0; i < points.length; i++) {
            int[] p1 = points[i];
            int x1 = p1[0];
            int y1 = p1[1];

            for (int j = i + 1; j < points.length; j++) {
                int[] p2 = points[j];
                int x2 = p2[0];
                int y2 = p2[1];

                int count = 2;
                if (x1 == x2) {
                    for (int l = 0; l < points.length; l++) {
                        if (l == i || l == j) {
                            continue;
                        }

                        int x3 = points[l][0];
                        if (x3 == x1) {
                            count++;
                        }
                    }
                }
                else if (y1 == y2) {
                    for (int l = 0; l < points.length; l++) {
                        if (l == i || l == j) {
                            continue;
                        }

                        int y3 = points[l][1];
                        if (y3 == y1) {
                            count++;
                        }
                    }
                }
                else {
                    double k = (double) (y2 - y1) / (x2 - x1);
                    double b = y1 - k * x1;

                    for (int l = 0; l < points.length; l++) {
                        if (l == i || l == j) {
                            continue;
                        }

                        int[] p3 = points[l];
                        int x3 = p3[0];
                        int y3 = p3[1];
                        double potentialY = k * x3 + b;

                        if (Math.abs(y3 - potentialY) <= 0.00001) {
                            count++;
                        }
                    }
                }

                max = Math.max(max, count);
            }
        }

        return max;
    }
}
