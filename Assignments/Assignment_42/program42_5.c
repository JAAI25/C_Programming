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

int Minimum(PNODE Head)
{
    int iMin = Head -> Data;

    while(Head != NULL)
    {
        if(Head -> Data < iMin)
        {
            iMin = Head -> Data; 
        }
        Head = Head -> Next;   
    }
    return iMin;
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

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = Minimum(First);

    printf("Minimum number is : %d",iRet);

    return 0;
}