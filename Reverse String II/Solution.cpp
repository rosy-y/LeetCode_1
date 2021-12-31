class Solution {
public:
    string reverseStr(string s, int k) {
        for (int l=0; l<s.size(); l+=2*k) {
            int i=l, j= min(l+k-1, (int)s.size()-1);  // j 로 2k 가 존재하지 않는 경우도 고려
            while (i < j) {
                swap(s[i], s[j]);
                i++; j--;                
            }
        }
        return s;
    }
};
