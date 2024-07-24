class Solution {
    public int[] sortJumbled(int[] mapping, int[] nums) {
        int n=nums.length;
        Integer[] arr=new Integer[n];
        
        //converting array into integer array
        for(int i=0;i<n;i++)
        {
            arr[i]=nums[i];
        }
        
        //perform sorting 
        Arrays.sort(arr,(a,b)->{
            int mappedA=mapValue(a,mapping);
            int mappedB=mapValue(b,mapping);
            return Integer.compare(mappedA,mappedB);  //ascending order 
        });
            
            
        // converting back to array from Integer array
            int[] newArr=new int[n];
        for(int i=0;i<n;i++)
        {
            newArr[i]=arr[i];
        }
        
        return newArr;
    }
    
    private int mapValue(int x,int[] mapping)
    {
        StringBuilder str=new StringBuilder();
        String s=String.valueOf(x);
        for(char c: s.toCharArray())
        {
            str.append(mapping[c-'0']);
        }
        return Integer.parseInt(str.toString());
        
    }
}