class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int a=0;
        while(l<r){
            int w=r-l;
            int h=min(heights[l],heights[r]);
            a=max(h*w,a);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return a;
    }
};