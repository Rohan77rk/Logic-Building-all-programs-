#include<stdio.h>

typedef unsigned int UINT;

int CountonBits(UINT No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2; 

    } 
    return iCnt;
}
int main()
{
    UINT value = 0;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d",&value);

    Ret = CountonBits(value);

    printf("Number of bits which are ON are :%d\n",Ret);

    return 0;
}