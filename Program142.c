#include<stdio.h>

int CountFrequency(char *str,char cLetter)
{
    int iCnt = 0;
    while(*str !='\0')
    {

    
        if(*str == cLetter)
        {

        iCnt++;
        }
        str++;
        
    }
    return iCnt;
}

int main()
{   
    char Arr[20];
    char cValue ='\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("enter character to check frequency :\n");
    scanf("%d",&cValue);

    iRet = CountFrequency(Arr,cValue); // strlenX(100)

    printf("Frequency of %c is %d\n",cValue,iRet);

    return 0;
}