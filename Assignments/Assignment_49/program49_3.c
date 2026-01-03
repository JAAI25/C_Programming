#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckSorted
//  Description :   Check list is Asending Order
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

bool CheckSorted(PNODE Head)
{
    if((Head == NULL) || (Head->next == NULL))
    {
        return true;
    }

    while(Head->next != NULL)
    {
        if(Head->data > Head->next->data)
        {
            return false;
        }
        Head = Head->next;
    }
    return true;

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
    bool bRet = false;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        printf("Enter the number %d : ",iCnt);
        scanf("%d", &iValue);
        InsertFirst(&first,iValue);
    }

    Display(first);

   bRet = CheckSorted(first);

   if(bRet == true)
   {
        printf("Linklist is in Asending Order.");
   }
   else
   {
        printf("Linklist is not in Asending order");
   }
    return 0;
}