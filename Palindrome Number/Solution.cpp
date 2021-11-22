class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        string str = to_string(x);
        reverse(str.begin(), str.end());
        int y = stol(str);
        
        if (x == y) return true;
        else return false;
    }
};
