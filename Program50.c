//input : 751
//output : 3

//input : 7515
//output : 4

//input : 7
//output : 1
#include<stdio.h>

int CountDigits(int iNo)
{
    
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo > 0)
    {
        
        iNo = iNo / 10;
        iCnt++;
    }


    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("number of digits are : %d \n",iRet);



    return 0;
}