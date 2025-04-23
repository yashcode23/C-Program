#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;  
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
      *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
}

void SumDigit(PNODE First)
{
  int iDigit = 0;
  int iNo = 0;
  int iSum = 0;
  while(First!=NULL)
  {
    iNo = First->data;
    while(iNo!=0)
    {
      iDigit = iNo % 10;
      iSum = iSum + iDigit;
      iNo = iNo / 10;
    }
    printf("Sum of Digit is : %d\n",iSum);
    iSum = 0;
    First = First->next;
  }
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);

    SumDigit(Head);
    
    return 0;
}