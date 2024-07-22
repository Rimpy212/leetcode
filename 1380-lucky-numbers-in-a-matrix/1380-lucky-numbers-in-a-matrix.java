class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        int row=matrix.length;
        int col=matrix[0].length;
        List<Integer> finalList=new ArrayList<>();
        List<Integer> r=new ArrayList<>();
        //row wise data storing 
        for(int i=0;i<row;i++)
        {
            int min_val=Integer.MAX_VALUE;
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]<min_val)
                {
                    min_val=matrix[i][j];
                }
            }
            r.add(min_val);
        }
        
        List<Integer> c=new ArrayList<>();
        for(int i=0;i<col;i++)
        {
            int max_val=Integer.MIN_VALUE;
            for(int j=0;j<row;j++)
            {
                if(matrix[j][i]>max_val)
                {
                    max_val=matrix[j][i];
                }
            }
            c.add(max_val);
        }
        
        
        //comparing list
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==r.get(i) && matrix[i][j]==c.get(j))
                {
                    finalList.add(matrix[i][j]);
                }
            }
        }
        return finalList;
    }
}