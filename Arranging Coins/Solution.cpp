class Solution {
public:
    int arrangeCoins(int n) {
        long l=0, r=n;
        
        while (l <= r) {
            long m = (r-l)/2 +l;
            long sum = m*(m+1)/2;
            if (sum == n) return (int)m;
            if (n < sum) r = m-1;
            else l = m+1;
        }
        return (int)r;
    }
};
