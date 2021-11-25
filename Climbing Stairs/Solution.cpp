class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int step1 = 1, step2 = 2, allstep;
        for (int i = 3; i <= n; i++) {
            allstep = step1 + step2;
            step1 = step2;
            step2 = allstep;
        }
        return allstep;
    }
};
