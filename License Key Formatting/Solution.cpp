class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str = "";
        int size = 0;
        
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] != '-') {            
                if (size == k) {
                    str += '-';
                    size = 0;
                }
                str += (char)toupper(s[i]);
                size++;
            }            
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
