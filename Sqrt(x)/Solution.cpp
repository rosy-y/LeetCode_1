class Solution {
public:
    int mySqrt(int x) {
        long lo = 0, mid = 0, hi = x;
        
        while (lo < hi) {
            mid = lo + (hi - lo + 1) / 2;
            if (mid * mid <= long(x)) lo = mid;
            else hi = mid - 1;
        }
        return hi;
    }
};
