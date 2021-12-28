class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        vector<string> alpha = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char, int> m;
        
        for (int i=0; i<alpha.size(); i++) {
            for (char a : alpha[i]) {
                m[a] = i;  // 소문자
                m[a-32] = i;  // 대문자
            }
        }
        for (string w : words) {
            bool flag = true;
            for (int i=1; i<w.size(); i++) {
                if (m[w[i-1]] != m[w[i]]) {
                    flag = false; break;
                }
            }
           if (flag) v.push_back(w); 
        }
        return v;
    }
};
