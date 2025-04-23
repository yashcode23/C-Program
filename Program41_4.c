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

int Maximum (PNODE First)
{  
    int iMax = 0;
  
    while (First!=NULL)
    {
    if((First->data)>iMax)
    {
      iMax=(First->data);
    }
    First=First->next;
    }
    return iMax;  
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


  iRet=Maximum(Head);
  printf("%d",iRet);



    return 0;
}