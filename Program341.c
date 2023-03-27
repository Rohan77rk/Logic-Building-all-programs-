#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No,UINT Pos)
{
    UINT iMask = 0X00000001;    //UINT iMask = 1;
    UINT Result = 0;
    
    if(Pos < 1 || Pos > 32)
    {
        printf("Invalid position, it should be in beteen 1 to 32. \n");
        return false;
    }

    iMask = iMask << (Pos - 1);     //Dynamic Mask Formation

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
    UINT iPos = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&value);

    printf("enter the position of bit \n");
    scanf("%d",&iPos);

    bRet = CheckBit(value,iPos);

    if(bRet == true)
    {
        printf("Bit at the position %d is ON .\n",iPos);
    }
    else
    {
        printf("Bit at the position %d is OFF .\n",iPos);
    }
    return 0;
}