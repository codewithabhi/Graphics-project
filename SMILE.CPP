#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

main()
{
   int gd = DETECT, gm;


   initgraph(&gd, &gm, "C:\\TC\\BGI");
   settextstyle(2,HORIZ_DIR,9);
   outtextxy(200,20,"SMILE");
   setcolor(YELLOW);
   circle(250,200,100);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(250,200, YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(210, 150, 12, 22);
   fillellipse(290, 150, 12, 22);

   ellipse(250, 200, 205, 335, 50, 35);
   ellipse(250, 200, 205, 335, 50, 36);
   ellipse(250, 200, 200, 340, 50, 37);
   getch();
   closegraph();
   return 0;
}