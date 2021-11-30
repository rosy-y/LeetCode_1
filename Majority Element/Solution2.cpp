public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for (int tmp : nums) {
            if (++m[tmp] > nums.size()/2)
                return tmp;
        }
        return 0;
    }
};
