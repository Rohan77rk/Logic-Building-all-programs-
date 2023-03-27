#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        while(1)
        {
            if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                temp = temp->rchild;
                break;
                }
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                temp = temp->lchild;
                break;
                }
            }
            else if(No == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed. \n");
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t",Root->lchild);
        Inorder(Root->rchild);
    }
}

void Postorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->data);
        printf("%d\t",Root->lchild);
        Inorder(Root->rchild);
    }
}

int main()
{
    PNODE Head = NULL;

    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,21);

    return 0;
}