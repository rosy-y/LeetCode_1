class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4 != 0);  // 4개가 남은 경우 무조건 진다
    }
};
