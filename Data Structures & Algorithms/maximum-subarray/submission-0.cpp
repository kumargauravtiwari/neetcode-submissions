class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0];
        int currSum = 0;

        for(auto num:nums){
            if(currSum<0){
                currSum =0;
            }
            currSum += num;
            maxsub = max(maxsub, currSum);
        }
        return maxsub;
    }
};
