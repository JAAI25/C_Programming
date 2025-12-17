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

int SumDigit(PNODE Head)
{
    int iSumDig = 0;     

    while(Head != NULL)
    {
        int iDigit = Head -> Data;
        iSumDig = 0;
        while( iDigit != 0)
        {
            iSumDig +=(iDigit % 10);
            iDigit = (iDigit/10);
            
        }
        printf("%d\t",iSumDig);
        Head = Head -> Next;
    }
    
}
 
void Display(PNODE Head)
{
    while(Head != NULL)
    { 
        printf("| %d |->",Head -> Data);
        Head = Head -> Next;
    }
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

    iRet = SumDigit(First);

    return 0;
}