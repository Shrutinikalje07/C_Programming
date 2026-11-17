#include<stdio.h>

void RangeDisplay(int iStar , int iEnd)
{
    int i = 0;
    
    if(iStar > iEnd)
    {
        printf("Invaild range");
    }
    else
    {
        for(i = iStar; i <=iEnd; i++)
        {
            printf("%d",i);
        }
    }
}
int main()
{
        int iValue1 = 0, iValue2 = 0;

        printf("Enter starting point : ");
        scanf("%d",&iValue1);

        printf("Enter ending point : ");
        scanf("%d",&iValue2);

        RangeDisplay(iValue1, iValue2);

        return 0;
}