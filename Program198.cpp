#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int i)
    {
        cout<<"allocating the memory of resources...."<<"\n";
        iSize = i;
        Arr = new int[iSize];  //in c Arr = (int *)malloc(iSize * sizeof(int));
    }

    ~ArrayX()
    {
        cout<<"Deallocation the memory of resources...."<<"\n";
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
    int iLength = 0;

    cout<<"Enter the size of array :"<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);



    obj.Accept();
    obj.Display();

    return 0;
}