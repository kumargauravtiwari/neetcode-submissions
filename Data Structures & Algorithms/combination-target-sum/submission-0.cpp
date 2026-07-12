class Solution {
public:
    void dfs(vector<int>& nums, vector<int>& ans, int i, int target , vector<vector<int>>& allComb){
        if(target==0){
            allComb.push_back(ans);
            return;
        }
        if(target<0 || i>=nums.size()){
            return;
        }

        //include
        ans.push_back(nums[i]);
        dfs(nums,ans,i,target-nums[i],allComb);
        ans.pop_back();

        //exclude
        dfs(nums,ans,i+1,target,allComb);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> allComb;
        vector<int> ans;
        dfs(nums,ans,0,target,allComb);

        return allComb;
    }
};
