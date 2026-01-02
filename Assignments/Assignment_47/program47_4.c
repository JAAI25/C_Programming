#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayPrime
//  Description :   Linklist display Prime number
//  Input :         Linklist
//  Output :         Display prime number
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

void DisplayPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iPrime = 0;

    printf("Prime Numbers are :");
    while(Head != NULL)
    {
        iNo = Head->data;
        
        if(iNo > 1)
        {
            iPrime = 1;

            for(iCnt = 2; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iPrime = 0;
                    break;
                }
            }
        }

        if(iPrime == 1)
        {
            printf("%d\t",iNo);
        }
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

    DisplayPrime(first);

    return 0;
}