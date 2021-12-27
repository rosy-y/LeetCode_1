class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 1) return duration;
        int tot = 0;
        
        for (int i=0; i<n-1; i++) {
            if (tot + timeSeries[i] > timeSeries[i+1]) tot += timeSeries[i+1] - timeSeries[i];
            else tot += duration;
        }
        return tot + duration;
    }
};
