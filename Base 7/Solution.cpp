class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        int n = abs(num);
        string str = "";
        
        while (n > 0) {
            str = to_string(n % 7) + str;
            n /= 7;
        }
        return num > 0 ? str : "-" + str;
    }
};
