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
bool chkPerfect(int iNo)
{
    int i = 0;
    int iSum = 0;
    for(i=1;(i<=iNo/2);i++)
    {
      if(iNo % i ==0)
      {
        iSum = iSum + i;
      }
    }  
    if(iSum==iNo)
    {
      return true;
    }
    else
   {
     return false;
   }
}
void DisplayPerfect(PNODE First)
{
  while(First!=NULL)
  {
    if(chkPerfect(First->data)==true)
    {
      printf("Perfect Number from LL are %d\n",First->data);
    }
    First = First->next;
  }
}
int main()
{
    PNODE Head = NULL;
    

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    DisplayPerfect(Head);
   


    return 0;
}