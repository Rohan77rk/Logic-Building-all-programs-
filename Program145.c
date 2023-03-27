#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    int iCnt = 0;
    bool bflag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bflag = true;
            break;
        
        }
        str++;
    }
    return bflag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

if(bRet ==true)
{
    printf("character is present in the string\n");

}
else
{
        printf("character is not present in the string\n");

}
    return 0;
}