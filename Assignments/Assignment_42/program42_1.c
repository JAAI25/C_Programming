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

int SearchFirstOcc(PNODE Head, int no)
{
    int iFirst = 1;

    while(Head != NULL)
    {
        if(Head -> Data == no)
        {
            return iFirst;
        }
        Head = Head -> Next;
        iFirst++;
    }
    return -1;
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
    int iValue = 0;

    PNODE First = NULL;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);


    Display(First);

    printf("Enter the input value : ");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(First,iValue);

    if(iRet != -1)
    {
        printf("Position is : %d\n",iRet);
    }
    else
    {
        printf("No data found");
    }


    return 0;
}