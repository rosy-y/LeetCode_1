class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(256, 0);
        for (auto a : s) v[a-'0']++;
        
        int len = 0;
        for (auto b : v) {
            len += b/2 * 2;
            if (len%2==0 && b%2==1) len++;  // 중앙 문자 처리
        }
        return len;
    }
};
