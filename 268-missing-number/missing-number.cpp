class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 1);
        iota(v.begin(), v.end(), 0);  // 0 to n
        
        for (int x : nums) {
            v[x] = -1;   // mark present
        }

        for (int i = 0; i <= n; i++) {
            if (v[i] != -1)
                return i;
        }

        return -1; // won't happen
    }
};