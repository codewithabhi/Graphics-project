#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"c://tc//bgi");
setcolor(YELLOW);
rectangle(30,30,600,450);
setcolor(WHITE);
line(60,400,580,400);
line(60,60,60,400);
setcolor(YELLOW);
line(80,380,150,350);
line(150,350,220,290);
line(220,290,290,260);
line(290,260,360,200);
line(360,200,430,180);
line(430,180,500,120);
settextstyle(3,HORIZ_DIR,5);
outtextxy(220,50,"LINE CHART");
getch();
}