class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=0;
        int k=m;
        while(i<n)
        {
            nums1[k]=nums2[i];
            i++;
            k++;
        }
        Arrays.sort(nums1);  // O(NlogN) : TC 
        return;
    }
}