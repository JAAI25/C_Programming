#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountPrime
//  Description :   Linklist display count of prime number
//  Input :         Linklist
//  Output :        count of prime number
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

int CountPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iPrime = 0;
    int iCount = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        iPrime = 0;
        
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
            iCount++;
        }
        Head = Head->next;
        
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

    iRet = CountPrime(first);

    printf("count of prime number is : %d",iRet);

    

    return 0;
}