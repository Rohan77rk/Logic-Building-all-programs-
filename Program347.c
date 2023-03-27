//  *   *   *   *

#include<stdio.h>
void DisplayI()
{
    int iCnt = 1;     //Storage class (Auto)

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR(); //Recursive Call
    }
}
int main()
{
    DisplayR();

    return 0;
}