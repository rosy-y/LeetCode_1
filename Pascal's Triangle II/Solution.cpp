class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex+1, 1);

        for (int i=2; i<=rowIndex; i++) {
            for (int j=i-1; j>=1; j--) {
                v[j] = v[j] + v[j-1];
            }
        }
        return v;
    }
};
