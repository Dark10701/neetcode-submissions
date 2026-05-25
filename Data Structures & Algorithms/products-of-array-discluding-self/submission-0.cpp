class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int k=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    k=k*nums[j];
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};
