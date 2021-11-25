class Solution {
public:
    string addBinary(string a, string b) {
        string str;
        int c = 0, i = a.size(), j = b.size();  // c는 carry
        
        while (c || i || j) {
            c += (i ? a[(i--)-1] -'0' : 0) + (j ? b[(j--)-1] -'0' : 0);
            str = char(c%2 + '0') + str;
            c /= 2;
        }
        return str;
    }
};
