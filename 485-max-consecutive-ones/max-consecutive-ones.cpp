class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int v = 0;
       
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                count++;
                v = max(count,v);
            }else{
                count = 0;
            }
        }
        return v;
    }
};