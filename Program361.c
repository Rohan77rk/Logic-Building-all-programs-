 #include<stdio.h>
 #include<stdbool.h>
int DigitSumR(int No)
{
    
    int iDigit = 0;
    static int Sum = 0;    
    if(No != 0)
    {
        iDigit = No % 10;
        Sum = Sum + iDigit;
        No = No / 10;
        
        DigitSumR(No);
    }
    return Sum;
}


int main()
{
    int Value = 0;
    int Ret =0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    Ret=DigitSumR(Value);

    
        printf("Sum of digit is %d \n",Ret);


    return 0;
}