/*

row = 4
col = 4

1       $       3       $
1       $       3       $
1       $       3       $
1       $       3       $

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
     int i=0, j=0 ;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j % 2)==0)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t",j);
            }
        
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("enter the number of rows :");
    scanf("%d",&iValue1);

    
    printf("enter the number of columns :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}