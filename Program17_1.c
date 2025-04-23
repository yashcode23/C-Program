#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i , j = 0;
   if(iRow!=iCol)
   {
    printf("Number of rows and number of colums should be same\n"
    );
    return;
   }
   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++)
    {
        if(i>=j)
        {
            printf("#\t");
        }    
    }
    printf("\n");   
   } 
}
int main()
{
    int iValue1 =0,iValue2 = 0;

    printf("Enter number of rows and colums\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}

