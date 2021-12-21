class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string S = s + s;
        S = S.substr(1, S.size()-2);  // 앞, 뒤 제거
        return S.find(s) != string::npos ? true : false;
    }
};
