//row 4
//columns 4
/*

*   *   *   *
*   *   *   *
*   *   *   *
*   *   *   *   


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
    int i = 0, j = 0;
//        1       2        3
    for(i = 1; i <= iRow; i++)  //outer
    {
        //    1      2         3
        for(j = 1; j <= iCol; j++)  //inner 4 of outer
        {
            printf("*\t");          //4 of inner 
        }
        printf("\n\n\n\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;;
    printf("enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}