#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("enter string \n");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("NUmber of characters are %d\n",iRet);



    return 0;
}