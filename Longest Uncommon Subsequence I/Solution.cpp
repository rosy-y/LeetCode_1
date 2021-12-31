class Solution {
public:
    // a = b 일 때, 절대 비공통 부분열이 존재 할 수 없다.
    // length(a) = length(b) 그리고 a ≠ b 일 때, 각 문자열은 각 부분열이 될 수 없다. a 나 b 의 길이를 반환.
    // length(a) ≠ length(b) 일 때, 길이가 더 큰 문자열은 작은 문자열의 부분열이 될 수 없다. a 나 b 중 큰 길이를 반환.

    int findLUSlength(string a, string b) {
        if (a == b) return -1;
        return max(a.size(), b.size());            
    }
};
