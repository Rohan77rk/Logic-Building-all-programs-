 #include<stdio.h>
 #include<stdbool.h>
int CountDigitsI(int No)
{
    static int iCnt = 0;
    static int Sum = 0;
    while(No != 0)
    {
        
        iCnt++;
        No = No/10;
    }
    return iCnt;
}


int main()
{
    int Value = 0;
    int Ret =0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    Ret=CountDigitsI(Value);

    
        printf("Number of digit is %d \n",Ret);


    return 0;
}