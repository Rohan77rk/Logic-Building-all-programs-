#include<stdio.h>
int Sum(int Arr[],int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum+Arr[iCnt];
        iCnt++;
        Sum(Arr,iSize);
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    int Brr[5] = {10,20,30,40,50};
     iRet = Sum(Brr,5);
     printf("Sum = %d",iRet);
    return 0;
}