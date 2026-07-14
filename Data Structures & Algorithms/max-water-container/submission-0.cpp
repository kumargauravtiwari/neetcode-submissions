class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxHeight = 0;
        int i = 0;
        int j = heights.size()-1;

        while(i<j){
            int currArea = min(heights[i],heights[j])*(j-i);
            maxHeight = max(currArea,maxHeight);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
            
            
            
        }
        return maxHeight;
    }
};
