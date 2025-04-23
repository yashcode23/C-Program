#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  unlink("Marvellous.txt");

  printf("%d  byte gets deleted in the file\n");

 return 0;
}