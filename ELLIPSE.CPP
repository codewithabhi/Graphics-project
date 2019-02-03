#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{

 int gd =DETECT,gm;
// int left=100;
initgraph(&gd,&gm,"c://tc//BGI");
setbkcolor(15);
setcolor(BLUE);
ellipse(270,200,0,360,150,80);
outtextxy(270,200,"Ellipse");
 getch();
 closegraph();
 }