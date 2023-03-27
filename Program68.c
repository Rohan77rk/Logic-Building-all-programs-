#include<stdio.h>
#include<stdlib.h>


int main()
{   
    int i = 0,iSize = 0;
    int Arr[5];
    printf("enter size of array \n");
    scanf("%d",&iSize);
    
    printf("enter the elements :\n");
    for(i = 0;i < iSize;i++)
    {

    scanf("%d",&Arr[i]);
    }
    
    printf("elements from array are :\n");
    
    for(i = 0;i < iSize;i++)
    {
        printf("%d \n",Arr[i]);
    }
    

    return 0;
}