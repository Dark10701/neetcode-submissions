class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        for(int num:nums){
            hash.insert(num);
        }
        int ans=0;
        for(int num:hash){
            if(hash.find(num-1)==hash.end()){
                int current=num;
                int len=1;

                while(hash.find(current+1)!=hash.end()){
                    current++;
                    len++;
                }
                ans=max(len,ans);
            }
        }
        return ans;
    }
};
