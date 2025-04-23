#include<stdio.h>

void DisplaySchedule(char chDiv)
{
  if(chDiv=='A') 
  
  {
    printf("Your Exam at 7 AM\n");
  } 
  else if(chDiv=='B')
  {
    printf("Your Exam at 8:30 AM\n");
  }
  else if(chDiv=='C')
  {
    printf("Your Exam at 9:20 AM\n");

  }
  else if (chDiv=='D')
  {
    printf("Your Exam at 10:30 AM\n");
  }
  
}
int main()
{
    char cValue ='\0';
    char cRet;
    
    printf("Enter your Division\n");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);

    return 0;
}