class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x ^ y, cnt=0;
        
        while (diff > 0) {
            cnt += diff & 1;  // 1인 경우 카운트
            diff >>= 1;
        }
        return cnt;
    }
};
