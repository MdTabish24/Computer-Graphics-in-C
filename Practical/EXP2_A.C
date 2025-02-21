#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(200,50,"Tabish Ansari \n RollNo 04");
line(0,250,850,250);
line(200,50,200,450);
line(450,50,450,450);
circle(100,150,70);
outtextxy(100,150,"CIRCLE");
rectangle(250,110,400,200);
outtextxy(325,155,"RECTANGLE");
ellipse(550,150,0,360,85,34);
outtextxy(550,150,"ELLIPSE");
ellipse(100,350,0,180,70,50);
outtextxy(55,350,"HALF ELLIPSE");
pieslice(325,350,0,180,50);
outtextxy(300,370,"PIESLICE");
outtextxy(470,270,"CONCENTRIC CIRCLE");
setcolor(BLUE);
circle(550,350,40);
setcolor(YELLOW);
circle(550,350,50);
setcolor(RED);
circle(550,350,60);
getch();
closegraph();
}