class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[low]<=nums[mid]) //LHS is sorted
            {
                if(target>=nums[low] && target<=nums[mid]) //it will come on lhs
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{ //rhs is sorted
                if(target>=nums[mid] && target<=nums[high]) //it will come on rhs
                {
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};