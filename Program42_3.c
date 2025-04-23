#include<stdio.h>
#include<stdlib.h>

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
int AdditionEven(PNODE First)
{
  int iSum = 0;
  int iNo = 0;
  while(First!=NULL)
  {
    iNo = First->data;
    if(iNo % 2 == 0)
    {
      iSum = iSum + iNo;
    }
    First = First->next;
  }
  return iSum;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    InsertFirst(&Head,56);
    
    iRet=AdditionEven(Head);
    printf("%d",iRet);
  
    return 0;
}