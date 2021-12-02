class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int size = nums.size();
        
        for (int i=0, j=0; i<size; i++) {
            if (i == size-1 || nums[i+1] > nums[i]+1) {
                v.push_back(to_string(nums[j]));
                if (i > j) 
                    v.back() += "->" + to_string(nums[i]);
                j = i + 1;
            }
        }
    return v;
    }
};
