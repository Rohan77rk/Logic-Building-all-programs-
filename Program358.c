 #include<stdio.h>
 #include<stdbool.h>
bool CheckPerfect(int No)
{
    static int iCnt = 1;
    static int Sum = 0;
    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            
            Sum = Sum + iCnt;
        }
        iCnt++;
            CheckPerfect(No);
    }
    if(Sum == No)
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
    int Value = 0;
    int bRet = false;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    bRet=CheckPerfect(Value);

    if(bRet == true)
    {
        printf("%d is a perfect number \n",Value);
    }
    else
    {
        printf("%d is a not perfect number \n",Value);
    }

    return 0;
}