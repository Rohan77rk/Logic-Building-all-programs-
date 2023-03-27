#include<stdio.h>
#include<stdbool.h>

// 4

typedef unsigned int UINT;

//
//  0000     0000    0000    0000    0000    0001    1100    0000
//  1111     1111    1111    1111    1111    1111    0111       0   
//  0XFFFFFFF7
//  
//          
UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;
    
    iAns = No & iMask;
    return iAns;

}

int main()
{
    UINT value = 0;
     UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&value);

    iRet = OffBit(value);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}