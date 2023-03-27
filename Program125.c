#include<stdio.h>
int main()
{
    int i = 0;

    printf("_____________________________________________________\n");
    printf("ASCII Table\n");
        printf("_____________________________________________________\n");
printf("Character\t Decimal\t Hex \t Octal\n");

for(i = 0;i<=127;i++)
{
    printf("%c \t %d \t %x \t %o \t\n",i,i,i,i);
}
}