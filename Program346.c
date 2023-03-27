#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No,UINT Start,UINT End)
{
    UINT Result = 0;
    UINT Mask = 0;
    UINT Mask1 = 0XFFFFFFFF;
    UINT Mask2 = 0XFFFFFFFF;

    Mask1 = Mask1 << (Start - 1);
    Mask2 = Mask2 >>(32 - End);
    Mask = Mask1 & Mask2;
    Result = No ^ Mask;
    return Result;

}
int main()
{
    UINT Ret = 0,i = 0,j = 0;
    UINT Value = 0;
    printf("Please entet the number :\n");
    scanf("%d",&Value);

    printf("Enter Starting Bit position :\n");
    scanf("%d",&i);

    printf("Enter Starting Bit position :\n");
    scanf("%d",&j);

    Ret = ToggleRange(Value,i,j);
    printf("Updated number is : %d\n",Ret);
    return 0;
}