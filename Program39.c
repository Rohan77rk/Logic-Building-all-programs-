#include<stdio.h>

// input 5
// output 5 4 3 2 1
void DisplayReverse(int iNo)
{
    int iCnt = 0;
    printf("-------------------------------------------------------------------\n");
    for(iCnt = iNo; iCnt >= 1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n-------------------------------------------------------------------\n");
}

int main()
{
    int iValue = 0;
    printf("enter the number");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}