#include<stdio.h>

//0(N/2)

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("factors are : \n");
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}