class Solution {
    public int[] frequencySort(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer>m=new HashMap<>();
        Arrays.stream(nums).forEach((no)->{
            m.put(no,m.getOrDefault(no,0)+1);
        });
            
        //Declaring the Integer array of object
        Integer[] arr=new Integer[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=nums[i];
        }
        
        
        //Sorting 
        Arrays.sort(arr,(a,b) -> {
            if(m.get(a).equals(m.get(b)))
            {
                return Integer.compare(b,a); //descending order
            }
            return Integer.compare(m.get(a),m.get(b));  //ascending order
        });
            
        //converting back to int array
            for(int i=0;i<n;i++)
            {
                nums[i]=arr[i];
            }
        return nums;
    }
}