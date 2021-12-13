class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mm;
        
        for (auto m : magazine) mm[m]++;
        for (auto r : ransomNote) {
            if(--mm[r] < 0) return false;
        }
        return true;
    }
};
