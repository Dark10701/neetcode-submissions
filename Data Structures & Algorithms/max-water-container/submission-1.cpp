class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0, right=n-1;
        int ans=0;
        while(left<right){
            int w=right-left;
            int h=min(heights[left],heights[right]);
            if(heights[left]<heights[right]){
                ans=max(h*w,ans);
                left++;
            }
            else{
                ans=max(h*w,ans);
                right--;
            }
        }
        return ans;
    }
};
