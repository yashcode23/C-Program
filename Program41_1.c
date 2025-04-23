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

void Display(PNODE First)
{
  while(First!=NULL)
  {
    printf("| %d |->",First->data);
    First=First->next;
  }
  printf("NULL\n");
}

int Count(PNODE First)
{
  int iCount = 0;
  while(First!=NULL)
  {
    iCount++;
    First=First->next;
  }
  return iCount;
}
int addition (PNODE First)
{  
    int iSum = 0;
    int iCnt= 0;
  
    while (First!=NULL)
    {
    iSum=iSum+(First->data);
    First=First->next;
    }
    return iSum;
    
}
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
void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
      *First=newn;
    }
    else
    {
        temp = *First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121); 


  iRet=addition(Head);
  printf("Addition is %d:",iRet);

  return 0;
}