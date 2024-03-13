class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++)
        {
            int leftSum=0;
            int rightSum=0;
            for(int k=1;k<=i;k++)
            {
                leftSum+=k;
            }
            for(int j=i;j<=n;j++)
            {
                rightSum+=j;
            }
            if(leftSum==rightSum)
            {
                return i;
            }
        }
        return -1;
    }
};