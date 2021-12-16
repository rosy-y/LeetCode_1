class Solution {
public:
    int thirdMax(vector<int>& nums) {        
        set<int> s;
        
        for(int n: nums) s.insert(n);
        if (s.size() < 3) return *max_element(s.begin(), s.end());
        else return *next(s.begin(), s.size()-3);
    }
};
