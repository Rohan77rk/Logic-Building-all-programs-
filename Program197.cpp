#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int i)
    {
        iSize = i;
        Arr = new int[iSize];  //in c Arr = (int *)malloc(iSize * sizeof(int));
    }

    ~ArrayX()
    {
        delete []Arr;    //free(Arr)
    }

    void Accept()
    {
        cout<<"Enter the elements of arrays :"<<"\n";

        for(int iCnt = 0;iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];  //scanf("%d",&Arr[iCnt]);
        }
    }

    void Display()
    {
        cout<<"elements of arrays :"<<"\n";

        for(int iCnt = 0;iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";  //printf("%d",&Arr[iCnt]);
        }
        cout<<"\n";
    }
};
int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}