#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayGreaterThanAvg
//  Description :   Display elements greater than average
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

void DisplayGreaterThanAvg(PNODE Head)
{
    PNODE temp = NULL; 
    int iSum = 0; int iCount = 0;
    float fAvg = 0;

    temp = Head;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        iCount++;
        temp = temp->next;
    }

    if(iCount == 0)
    {
        return ;
    }

    fAvg = (float)iSum/iCount;

    printf("Average is : %f\n",fAvg);
    printf("Elements greater than averages are : ");

    temp = Head;
    while(temp != NULL)
    {
        if(temp->data > fAvg)
        {
            printf("%d ",temp->data);
        }
        temp = temp->next;
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

    DisplayGreaterThanAvg(first);

    return 0;
}