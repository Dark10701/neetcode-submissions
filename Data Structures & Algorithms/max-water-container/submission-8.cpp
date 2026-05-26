class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0, right=heights.size()-1;
        int a=0;
        while(left<right){
            int w=right-left;
            int h=min(heights[left],heights[right]);
            a=max(h*w,a);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return a;
    }
};
