class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string tmp, rev;
        
        while (ss >> tmp) {
            reverse(tmp.begin(), tmp.end());
            rev += tmp + ' ';
        }
        rev.pop_back();  // 마지막 공백 제거
        return rev;
    }
};
