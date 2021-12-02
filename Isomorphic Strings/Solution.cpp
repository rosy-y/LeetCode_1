class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mS[128] = {0};
        char mT[128] = {0};        
        int size = s.size();
        
        for (int i=0; i<size; i++) {
            if (mS[s[i]] != mT[t[i]]) return false;
            mS[s[i]] = i + 1;
            mT[t[i]] = i + 1;
        }
        return true;
    }
};
