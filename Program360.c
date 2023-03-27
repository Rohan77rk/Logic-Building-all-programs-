 #include<stdio.h>
 #include<stdbool.h>
int CountDigitsR(int No)
{
    static int iCnt = 0;
    
    if(No != 0)
    {
        
        iCnt++;
        No = No/10;
        CountDigitsI(No);
    }
    return iCnt;
}


int main()
{
    int Value = 0;
    int Ret =0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    Ret=CountDigitsR(Value);

    
        printf("Number of digit is %d \n",Ret);


    return 0;
}