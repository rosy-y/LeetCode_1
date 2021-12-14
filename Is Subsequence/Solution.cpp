class Solution {
public:
    bool isSubsequence(string s, string t) {
        int end = 0;
        
        for (auto a : s) {
            end = t.find(a, end);
            if (end == string::npos) return false;
            end++;
        }
        return true;
    }
};
