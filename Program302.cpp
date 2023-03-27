#include<iostream>
using namespace std;

double Addition(double i, int j)
{
double ans = 0;
ans = i + j;
return ans;
}
int main()
{
    double a = 11, b = 10, ret = 0;

    ret = Addition(a,b);
    cout<<"Addtion is :"<<ret<<"\n";
    return 0;
}
