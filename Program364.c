#include<stdio.h>

int StrLenCapR(char *str)
{
     static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') )
        {

        iCnt++;
        }
        str++;
        StrLenCapR(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrLenCapR(Arr);

    printf("String length is : %d\n",iRet);
    return 0;
}