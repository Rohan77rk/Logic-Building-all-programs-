#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;
    
    for(iRev = 0 ;iNo != 0; iNo = iNo / 10 )
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        
        
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iRev;
}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("enter number :\n");
    scanf("%d",&iValue);
    bRet = CheckPalindrome(iValue);
    if(bRet == true)
    {
        printf("%d is palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not palindrome number\n",iValue);
    }

    return 0;
}