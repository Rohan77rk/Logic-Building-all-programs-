#include<stdio.h>

//input 6
// output 4 5 (4+5)=9

int SumNonFactors(int iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo%iCnt) !=0)
        {
            iSum = iSum + iCnt;
        }
    
}
return iSum;
}

int main()
{
    int iValue=0,iRet = 0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    iRet = SumNonFactors(iValue);
    printf("summation of non factors is = %d",iRet);

    return 0;
}