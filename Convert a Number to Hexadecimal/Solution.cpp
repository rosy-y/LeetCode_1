class Solution {
public:
    string toHex(int num) {
        unsigned int n = num;  // 음수 처리
        if (n == 0) return "0";
        string hexa = "0123456789abcdef";
        string res;
        
        
        while (n) {
            res = hexa[n%16] + res;
            n /= 16;
        }
        return res;
    }
};
