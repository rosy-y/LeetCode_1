class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0, flag;
        
        for (int i=0; i<word.size(); i++) {
            if ('A'<= word[i] && word[i] <= 'Z') {
                cnt++;
                flag = i;
            }
        }
        if (cnt==word.size() || cnt==0 || (cnt==1&&flag==0) ) return true;  // 조건 1/2/3
        return false;
    }
};
