#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
   int fd = 0;
   char Arr[]="PRE PLACEMENT ACTIVITY 2024";
   int Ret = 0;
   fd = open("Marvellous.txt",O_RDWR | O_APPEND);

  Ret=write(fd,Arr,strlen(Arr));  //(kashat lihayach ,kay liahayach, kiti lihayach)

  printf("%d byte gets written in the file\n",Ret);
  close(fd);

    return 0;
}