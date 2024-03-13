class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int leftVal=1;
        int rightVal=n;
        int leftSum=leftVal;
        int rightSum=rightVal;
        while(leftVal<rightVal)
        {
            if(leftSum<rightSum)
            {
                leftVal++;
                leftSum+=leftVal;
            }
            else{
                rightVal--;
                rightSum+=rightVal;
            }
            if(leftSum==rightSum && leftVal+1==rightVal-1)
            {
                return leftVal+1;
            }
        }
        return -1;
    }
};