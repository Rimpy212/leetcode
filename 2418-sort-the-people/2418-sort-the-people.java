class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        int n=heights.length;
        String[] s=new String[n];
        Map<Integer,String>m=new HashMap<>();
        for(int i=0;i<n;i++)
        {
            m.put(heights[i],names[i]);
        }
        Arrays.sort(heights); //ascending order
        int index=0;
        for(int i=n-1;i>=0;i--)
        {
            s[index]=m.get(heights[i]);
            index++;
        }
        return s;
    }
}