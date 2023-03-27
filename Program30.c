#include<stdio.h>
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("enter the value : \n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factorial of %d is %d",iValue,iRet);
}