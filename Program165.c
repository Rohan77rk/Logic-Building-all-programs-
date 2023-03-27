#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    //logic
}

void Display(PNODE First)
{
    //logic
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}  

/*
void InsertFirst(PPNODE First, int No)
void InsertLast(PPNODE First, int No)
void InsertAtPos(PPNODE First, int No, int Pos)

void DeleteFirst(PPNODE First)
void DeleteLast(PPNODE First)
void DeleteAtPos(PPNODE First, int Pos)

void Display(PNODE First)
void Count(PNODE First)
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////

/*
InsertFirst(&Head,11)
InsertLast(&Head,11)
InsertAtPos(&Head,5)

DeleteFirst(&Head)
DeleteFirst(&Head)
DeleteFirst(&Head,5)

Display(Head)
Count(Head)
*/

/*
Topic to read from C programming for data structures

Primitive data types
size of all data types
loops(while & for)
Dynamic memory(malloc & calloc)
Pointer and its types
pointer to pointer
Call by value and call by address
Structure Declaration
self referential structure
Memory allocation of structure
Direct and indirect accessing of structure typedef and its use
*/