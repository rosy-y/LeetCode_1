class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        
        for (int i=0; i<s.size(); i++) {
            if (isalpha(s[i])) str += tolower(s[i]);
            if (isdigit(s[i])) str += s[i];
            else continue;
        }
        
        string cmp = str;
        reverse(str.begin(), str.end());
        return str == cmp;
    }
};
