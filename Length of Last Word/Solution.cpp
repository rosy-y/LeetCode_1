class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0;
        
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] != ' ') flag++;
            else if (flag > 0) return flag;
        }
        return flag;
    }
};
