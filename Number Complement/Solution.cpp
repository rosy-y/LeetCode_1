class Solution {
public:
    int findComplement(int num) {
        int m=0, tmp=0, cnt=0;
        
        while (m < num) {
            m = (m << 1) | 1;  // num과 자릿수 맞추기, 11...(1의 보수)
        }
        return m & ~num;           
    }
};
