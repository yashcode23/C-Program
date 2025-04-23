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
int SearchFirstOcc(PNODE First,int No)
{  
  int iPos = -1;
  int iCount = 1;

  while(First!=NULL)
  {
    if((First->data)==No)
    {
      iPos = iCount;
      break;
    }
    iCount++;
    First = First->next;
  }
  return iPos;
}

int SearchLastOcc(PNODE First,int No)
{  
  int iPos = -1;
  int iCount = 1;

  while(First!=NULL)
  {
    if((First->data)==No)
    {
      iPos = iCount;
    }
    iCount++;
    First = First->next;
  }
  return iPos;
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
    int iValue = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
 
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,11);


    printf("Enter Number you want to serach\n");
    scanf("%d",&iValue);

    iRet=SearchLastOcc(Head,iValue);
    printf("%d",iRet);

    return 0;
}