class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int even =0;
        int mid=0;
        int odd = n-1;
        while(mid<=odd){
            if(nums[mid]%2==0){
                swap(nums[mid],nums[even]);
                mid++;
                even++;
            }else{
                swap(nums[mid],nums[odd]);
                odd--;
            }
        }
        return nums;
    }
};