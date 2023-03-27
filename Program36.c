#include<stdio.h>

//input 6
// output 4 5

//input 15

// output 2 4 6 7 8 9 10 11 12 13 14
void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("non factor of %d are : \n",iNo);

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo%iCnt) !=0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    DisplayNonFactors(iValue);

    return 0;
}