class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> ptoi;
        map<string, int> stoi;
        istringstream copys(s);
        
        int i=0, n = pattern.size();
        for (string tmp; copys>>tmp; i++) {
            if (ptoi[pattern[i]] != stoi[tmp]) return false;
            ptoi[pattern[i]] = stoi[tmp] = i + 1;
        }
        return i == n;
    }
};
