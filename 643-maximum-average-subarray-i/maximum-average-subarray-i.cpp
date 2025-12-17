class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }
        double maxsum = sum;

        int j = 0;
        int m=k;
        while(m<nums.size()){
            sum-=nums[j];
            j++;
            sum+=nums[m];
            m++;
            maxsum = max(maxsum,sum);
        }

          
         return maxsum/k;
    }
};