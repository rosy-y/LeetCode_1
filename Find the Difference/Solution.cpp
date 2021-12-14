class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums=0, sumt=0;
        
        for (auto a : s) sums += a;
        for (auto b : t) sumt += b;
        return sumt - sums;    
    }
};
