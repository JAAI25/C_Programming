#include<stdio.h>
#include<stdlib.h> 

struct node 
{
    int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Next = NULL;
    newn -> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

int AdditionEven(PNODE Head)
{
    int iAddEven = 0;

    while(Head != NULL)
    {
        if(Head -> Data % 2 == 0)
        {
            iAddEven = iAddEven + Head -> Data;

        }
        Head = Head -> Next;
    }
    return iAddEven;
}
 
void Display(PNODE Head)
{
    while(Head != NULL)
    { 
        printf("| %d |->",Head -> Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    Display(First);

    iRet = AdditionEven(First);

    printf("Addition of Even number is : %d",iRet);

    return 0;
}