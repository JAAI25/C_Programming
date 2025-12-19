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

int DisplayPerfect(PNODE Head)
{
     int iCnt = 0;
    int iSum = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iCnt++;              // position
        iNo = Head->Data;
        iSum = 0;
        i = 0;

        for(i = 1; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
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

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    iRet = DisplayPerfect(First);

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