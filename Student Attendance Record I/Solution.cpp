class Solution {
public:
    bool checkRecord(string s) {
        int a=0, l=0;
        
        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'A') a++;
            if (s[i] == 'L') l++;
            else l = 0;  // 연이은 지각이 아니면 초기화
            
            if (a>=2 || l>=3) return false;
        }
        return true;
    }
};
