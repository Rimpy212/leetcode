class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int result=0;
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>=goal)
            {
                result+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return result;
    }
};