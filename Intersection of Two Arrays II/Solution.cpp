class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> v;
        
        for (auto a : nums1) m[a]++;
        for (auto b : nums2) {
            if (m[b]) {
                v.push_back(b);
                m[b]--;
            }
        }
        return v;
    }
};
