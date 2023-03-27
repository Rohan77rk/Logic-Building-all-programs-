#include<stdio.h>

void DisplayOddFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt%2 != 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);

    DisplayOddFactor(iValue);

    return 0;

}