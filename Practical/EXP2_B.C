#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm,color;
int i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(200,370,"Tabish Ansari \n RollNo 04");
line(10,250,50,200);//one triangle tip
line(50,200,90,250);
line(10,250,90,250);
rectangle(10,250,90,350);
line(50,200,250,200);
line(250,200,300,250);
line(90,250,300,250);
rectangle(90,250,300,350);
//darwaza
rectangle(35,300,65,350);
setfillstyle(9,6);
floodfill(36,301,WHITE);
circle(58,325,3);//handlee
circle(50,230,10);
line(250,200,210,250);
rectangle(210,250,300,350);
//darwaza2.o
rectangle(240,300,270,350);
setfillstyle(9,6);
floodfill(241,301,WHITE);
circle(263,325,3); //hadle
circle(252,230,10);
//khidki
rectangle(125,270,175,300);
//---
line(125,270,145,280);//khidki ka mirror
line(145,280,145,290);
line(125,300,145,290);
//----
line(175,270,155,280);
line(155,280,155,290);
line(175,300,155,290);
//----coloring part
//triangle tip
setfillstyle(5,8);
floodfill(52,201,WHITE);
floodfill(11,251,WHITE);
floodfill(211,251,WHITE);
setfillstyle(2,1);
floodfill(91,251,WHITE);
setfillstyle(1,8);
floodfill(50,201,WHITE);
floodfill(250,201,WHITE);
setfillstyle(4,7);
floodfill(127,272,WHITE);
floodfill(174,273,WHITE);
//ghar complete
//mountais
setcolor(BROWN);
ellipse(100,160,0,180,100,150);
ellipse(280,160,0,153,100,150);
ellipse(460,160,0,153,100,150);
ellipse(640,160,0,153,100,150);
line(0,160,800,160);
setfillstyle(6,6);
floodfill(190,140,BROWN);
floodfill(300,140,BROWN);
floodfill(590,140,BROWN);
floodfill(450,140,BROWN);
setcolor(WHITE);
//KUWA
ellipse(450,250,0,360,80,25);
ellipse(450,260,0,180,70,15);
line(370,250,370,325);
line(530,250,530,325);
ellipse(450,325,180,360,80,25);
bar3d(370,245,375,200,10,5);
bar3d(515,250,520,200,10,5);
bar3d(372,205,513,212,10,5);
getch();
closegraph();
}