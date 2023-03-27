//  *   *   *   *
#include<stdio.h>

void DisplayR(int No)
{
   static int iCnt = 1;

    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No); //Recursive Call
    }
}
int main()
{
    int Value = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    printf("\n Inside Main \n");

    DisplayR(Value);
    printf("\n End of main ");

    return 0;
}