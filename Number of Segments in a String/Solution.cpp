class Solution {
public:
    int countSegments(string s) {
        int cnt = 0;
        s.push_back(' ');
        
        for (int i=1; i<s.size(); i++) {
            if (s[i-1] != ' ' && s[i] == ' ') cnt++;
        }
        return cnt;
    }
};
