class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp1(nums1.begin(), nums1.end());
        vector<int> v;
        
        for (auto a : nums2) {
            if (tmp1.erase(a)) v.push_back(a);
        }
        return v;
    }
};
