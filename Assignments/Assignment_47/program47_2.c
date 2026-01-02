#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountDigits
//  Description :   It is dispay the count digit in each node
//  Input :         Linklist
//  Output :        Count Digits
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

void CountDigits(PNODE Head)
{
    int iCnt = 0, iNo = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        iCnt = 0;

        if(iNo == 0)
        {
            iCnt = 1;
        }

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo/10; 
        }
        printf("%d\t", iCnt);
        Head = Head->next;
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

    Display(first);
    CountDigits(first);

    return 0;
}