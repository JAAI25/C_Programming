#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayReverse
//  Description :   Linklist display in reverse order
//  Input :         Linklist
//  Output :        Reverse Display
//  Auther :        Jaai Pranay Undire
//  Date :          02/01/2026
////////////////////////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void DisplayReverse(PNODE Head)
{
    int Arr[20], iCnt = 0;
    while(Head != NULL)
    {
        Arr[iCnt] = Head-> data;
        iCnt++;
        Head = Head->next;
    }

    for(iCnt = iCnt-1 ; iCnt >= 0; iCnt--)
    {
        printf("%d\t", Arr[iCnt]);
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("| %d  |->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");

}

int main()
{
    PNODE first = NULL;
    int iCnt = 0, iSize = 0, iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        printf("Enter the number %d : ",iCnt);
        scanf("%d", &iValue);
        InsertFirst(&first,iValue);
    }

    DisplayReverse(first);

    Display(first);

    

    return 0;
}