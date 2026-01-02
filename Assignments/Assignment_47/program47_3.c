#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumDigits
//  Description :   Sumation of Digits of each node
//  Input :         Linklist
//  Output :        Digit Sum
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

void SumDigits(PNODE Head)
{
    int iDigit = 0, iNo = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;

        if(iNo == 0)
        {
            iSum = 0;
        }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit; 
            iNo = iNo/10;
            
        }
        printf("%d\t", iSum);
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
    SumDigits(first);

    return 0;
}