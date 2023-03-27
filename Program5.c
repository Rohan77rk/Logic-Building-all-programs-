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
#include<stdbool.h>

//////////////////
//funcrion name: divisiblebyfive
//description:to check whether input is divisible by 5
//input:integer
//output:integer
//author:rohan
//date:12/10/2022
//
////////////////
bool DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo % 5;

    if(iAns==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////
//entry point of application
///////
int main()
{
int iValue = 0;
bool bRet;
printf("Enter number :\n");
scanf("%d",&iValue);

bRet = DivisibleByFive(iValue);
if(bRet==false)
{
    printf("%d is not divisible by 5 \n",iValue);
}
else{
    printf("%d is divisible by 5 \n",iValue);
}
return 0;
}