class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        
        for (int j=i; j<s.size()-1; j++) {            
            if (s[j] == ' ') {
                reverse(s.begin()+i, s.begin()+j);
                i = j + 1;
            }
        }
        reverse(s.begin()+i, s.end());  // 마지막 단어 처리
        return s;
    }
};
