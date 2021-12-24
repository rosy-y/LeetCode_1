class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxn=0, cnt=0;
        
        for (int a : nums) {
            if (a) {
                cnt++;
                maxn = max(maxn, cnt);
            }            
            else cnt = 0;
        }
        return maxn;
    }
};
