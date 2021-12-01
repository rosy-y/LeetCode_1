class Solution {
public:
    bool isHappy(int n) {        
        while (true) {
            int sum = 0;
            while (n != 0) {
            sum += (n%10) * (n%10);
            n /= 10;
            }
        
            if (1<=sum && sum<=9) {
                if (sum==1 || sum == 7) return true;
                else return false;
            }
            else n = sum;
        }
    }
};
