class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0, right=n-1;
        int ans=0;
        while(left<right){
            int wat=0;
            int w=right-left;
            int h=min(heights[left],heights[right]);
            if(heights[left]<heights[right]){
                wat=h*w;
                left++;
            }
            else{
                wat=h*w;
                right--;
            }
            ans=max(wat,ans);
        }
        return ans;
    }
};
