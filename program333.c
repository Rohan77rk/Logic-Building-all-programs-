#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 512;
    UINT Result = 0;
    
    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&value);

    bRet = CheckBit(value);

    if(bRet == true)
    {
        printf("10th bit is ON\n");
    }
    else
    {
        printf("10th bit is OFF\n");
    }
    return 0;
}