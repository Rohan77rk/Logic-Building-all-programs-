 
#include<stdio.h>
int FactorsR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;
    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            
            Sum = Sum + iCnt;
        }
        iCnt++;
            FactorsR(No);
    }
return Sum;
}


int main()
{
    int Value = 0;
    int Ret = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    Ret=FactorsR(Value);

    printf("Sum of factor is = %d",Ret);

    return 0;
}