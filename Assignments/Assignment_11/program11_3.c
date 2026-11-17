#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int i = 0;
    int iSum = 0;

    if(iStart <= 0 || iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        iSum = iSum + i;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iValue1 > 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d",iRet);
    }

    return 0;
}