//steps to follow while programming
////

//step1 understand the problem statement
//step2 write the algorithm
//step3 decide the programming language
//step4 write the program
//step5 test the program
/////////////
//problem statement: accept the number from user and check whether it is divisible by 5 or not
//////
//alogorithm
//////

/*
start
accept number from user as NO
divide that NO by 5 and check the value of remender 
if the value is 0
then display as NO is divisible by 5
otherwise
display as NO is not divisible by 5
end
*/

#include<stdio.h>

//////////////////
//funcrion name: divisiblebyfive
//description:to chek whether input is divisible by 5
//input:integer
//output:integer
//author:rohan
//date:12/10/2022
//
////////////////
int DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo % 5;

    if(iAns==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
///////
//entry point of application
///////
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number :\n");
scanf("%d",&iValue);

iRet = DivisibleByFive(iValue);
if(iRet==0)
{
    printf("%d is not divisible by 5 \n",iValue);
}
else{
    printf("%d is divisible by 5 \n",iValue);
}
return 0;
}