class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int answer = find(nums.begin(), nums.end(), target)-nums.begin();
        if (answer == nums.size()) {
            nums.push_back(target);
            sort(nums.begin(), nums.end());
            return find(nums.begin(), nums.end(), target)-nums.begin();
        }
        else return answer;
    }
};
