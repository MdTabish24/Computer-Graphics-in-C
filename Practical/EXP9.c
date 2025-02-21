#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm,color;
int i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<500;i++){
outtextxy(200,20,"Tabish Ansari");
outtextxy(200,40,"Roll No: 04");
line(0,350,700,350);
circle(25+i,340,10);
circle(105+i,340,10);
line(5+i,330,125+i,330);
line(5+i,330,5+i,320);
line(125+i,330,125+i,320);
line(5+i,320,15+i,320);
line(5+i,320,125+i,320);
line(125+i,320,115+i,320);
line(15+i,320,50+i,290);
line(115+i,320,80+i,290);
line(50+i,290,80+i,290);
line(65+i,290,65+i,320);
delay(10);
cleardevice(); }
getch();
closegraph(); }