#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Pos)
{
    UINT Result = 0;
    UINT iMask = 0X00000001;
    iMask = iMask << (Pos - 1);
    iMask = ~iMask;
    
    Result = No & iMask;
    return Result;

}

int main()
{
    UINT value = 0,iPos = 0;
     UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&value);

    printf("Enter Position : \n");
    scanf("%d",&iPos);

    iRet = OffBit(value,iPos);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}