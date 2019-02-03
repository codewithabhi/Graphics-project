#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>


void main()
		 { int i,gd= DETECT,gm,flag;
initgraph(&gd,&gm,"C://tc//bgi");

do
{
for(i=270;i<=400;i++)
{ outtextxy(220,30,"BOUNCING BALL");
if(i==400)
for(i;i>=270;i--)
{ outtextxy(220,30,"BOUNCING BALL");
setcolor(YELLOW);
line(30,416,550,416);
setcolor(YELLOW);
circle(250,i,15);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(250,i,YELLOW);
delay(10);
cleardevice();
}

setcolor(YELLOW);
line(30,416,550,416);
setcolor(YELLOW);
circle(250,i,15);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(250,i,YELLOW);
delay(10);
cleardevice();
if(kbhit()) {
flag =0;
break;
}
}
}while(flag);
getch();
}