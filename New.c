#include<stdio.h>
#include<graphics.h> 
#include <conio.h> 

int main() 
{ 
 int gd = DETECT, gm; 
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
setbkcolor(WHITE); 
setcolor(8); 
line(300, 300, 300, 100); 
rectangle(200, 300, 100, 100); 
getch(); 
closegraph(); 
 return 0; 
} 