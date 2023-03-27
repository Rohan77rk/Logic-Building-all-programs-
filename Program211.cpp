#include<istream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct nnode *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{

    return 0;
}