//  Input 4
// outout 4*3*2*1 = 24 
#include<stdio.h>

int Factorial(int No)
{
   static int Mult = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Mult = Mult * iCnt;
        iCnt++;
        Factorial(No);
    }
    return Mult;
}


int main()
{
    int Value = 0;
    int Ret = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    Ret = Factorial(Value);
    printf("Factorial is %d \n",Ret);

    return 0;
}