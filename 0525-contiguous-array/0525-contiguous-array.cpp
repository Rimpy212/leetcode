class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp{{0,-1}};
        int zero=0;
        int one=0;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zero++;
            else one++;
            int diff=zero-one;
            if(mp.find(diff)!=mp.end())
            {
                result=max(result,i-mp[diff]);
            }
            else{
                mp[diff]=i;
            }
        }
        return result;
    }
};