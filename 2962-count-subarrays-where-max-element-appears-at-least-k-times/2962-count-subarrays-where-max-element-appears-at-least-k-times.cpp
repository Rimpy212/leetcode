class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long max_ele=*max_element(nums.begin(),nums.end());
        int count=0;
        long long ans=0;
        int left=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==max_ele) count++;
            while(left<=i && count>=k)
            {
                if(nums[left]==max_ele) count--;
                ans+=n-i;
                left++;
            }
        }
        
        return ans;
    }
};