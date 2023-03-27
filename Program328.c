#include<stdio.h>


int CountonBits(unsigned int No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        No = No / 2;
    } 
    return iCnt;
}
int main()
{
    unsigned int value = 0;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d",&value);

    Ret = CountonBits(value);

    printf("Number of bits which are ON are :%d\n",Ret);

    return 0;
}