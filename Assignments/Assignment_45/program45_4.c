#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountGreater
//  Description :   Count elements greater than given number
//  Input :         Integer
//  Output :        Integer
//  Auther :        Jaai Pranay Undire
//  Date :          29/12/2025
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

int CountGreater(PNODE Head, int X)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->data > X)
        {
            iCount++;
        }
        Head = Head-> next;
    }
    return iCount;
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
    int iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        printf("Enter the number %d : ",iCnt);
        scanf("%d", &iValue);
        InsertFirst(&first,iValue);
    }

    Display(first);

    printf("Given number is :");
    scanf("%d",&iValue);

    iRet = CountGreater(first,iValue);

    printf("Count of number greater than %d is : %d",iValue,iRet);

    return 0;
}