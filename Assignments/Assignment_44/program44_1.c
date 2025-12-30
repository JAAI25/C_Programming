#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Search
//  Description :   Check whether number is present
//  Input :         Integer
//  Output :        Bool
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

bool Search(PNODE Head, int no)
{
    while(Head != NULL)
    {
        if(Head ->data == no)
        {
            return true;
        }
        Head = Head->next;

    }
    return false;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf(" | %d  |->", Head->data);
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

    printf("Enter the number to Search : ");
    scanf("%d",&iValue);

    bRet = Search(first,iValue);

    if(bRet == true)
    {
        printf("Number is present\n");

    }
    else
    {
        printf("Number is not present\n");
    }

    return 0;
}