#include<stdio.h>
#include<stdbool.h>

// 4

typedef unsigned int UINT;

//
//  0000     0000    0000    0000    0000    0001    1100    0000
//  0000     0000    0000    0000    0000    0000    0111    0000   
//  0X00000070
//  
//          
UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000070;
    UINT Result = 0;
    
    Result = No ^ iMask;
    return Result;

}

int main()
{
    UINT value = 0;
     UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&value);

    iRet = ToggleBit(value);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}