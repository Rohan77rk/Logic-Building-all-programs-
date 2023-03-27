#include<stdio.h>
#include<stdbool.h>



bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;

        }
    
    }
    
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }

int main()
{
    int iValue = 0;
    bool bret = false;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    bret = CheckPerfect(iValue);
    if(bret == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is a not a perfect number\n",iValue);
    }

    return 0;
}