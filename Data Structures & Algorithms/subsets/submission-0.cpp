class Solution {
public:
   void dfs(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allSubset){
    if(i==nums.size()){
        allSubset.push_back({ans});
        return;
    }
    //include
    ans.push_back(nums[i]);
    dfs(nums,ans,i+1,allSubset);
    ans.pop_back();

    //exclude
    dfs(nums,ans,i+1,allSubset);
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubset;
        vector<int> ans;
        dfs(nums,ans,0,allSubset);

        return allSubset;
    }
};
