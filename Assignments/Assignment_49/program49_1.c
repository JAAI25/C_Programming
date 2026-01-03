#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description :   print difference between maximum and minimum number
//  Input :         Linklist
//  Output :        
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

int Difference(PNODE Head)
{
    int iMax = 0, iMin = 0;

    while(Head == NULL)
    {
        return 0;
    }

    iMax = Head->data;
    iMin = Head->data;

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }

        if(Head->data < iMin)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }
    return iMax - iMin;
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

    iRet = Difference(first);

    printf("Difference is : %d ",iRet);

    return 0;
}