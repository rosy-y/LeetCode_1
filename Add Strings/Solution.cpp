class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int sum = 0;
        string str = "";

        while (i>=0 || j>=0) {
            if (i>=0) sum += num1[i--]-'0';
            if (j>=0) sum += num2[j--]-'0';
            str = to_string(sum%10) + str;  // 순서
            sum /= 10;
        }
         return sum ? "1"+str : str;
    }
};
