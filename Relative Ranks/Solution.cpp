class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> v(score.size());
        map<int, int> m;
        
        int i = 0;        
        for (int s : score) m[s] = i++; // 원래 순서 저장
        
        int rank = 1;
        for (auto it=m.rbegin(); it!=m.rend(); it++) {
            switch (rank) {
                case 1: v[it->second] = "Gold Medal"; break;
                case 2: v[it->second] = "Silver Medal"; break;
                case 3: v[it->second] = "Bronze Medal"; break;
                default: v[it->second] = to_string(rank);
            }
            rank++;
        }
        return v;
    }
};
