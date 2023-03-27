#include<iostream>
using namespace std;
template<class T>
T Sum(T Arr[],int iSize)
{
    int iCnt = 0;
    T ans;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        ans = ans + Arr[iCnt];
    }
    
    return ans;
}

int main()
{
    
    int Data[] = {10,20,30,40};

    int iRet = Sum(Data,4);
    cout<<"Sum ="<<iRet;
    cout<<"\n";

    float Dataf[] = {90.2f,9.23f,89.90f,67.90f,23.87f};
    float fRet = Sum(Dataf,5); 
    cout<<"Sum ="<<fRet;
    

    return 0;
}