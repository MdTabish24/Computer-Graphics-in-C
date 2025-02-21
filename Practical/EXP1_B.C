#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(350,100,"Tabish Ansari \n RollNo 04");
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
line(getmaxx()/2,0,getmaxx()/2,getmaxy());
getch();
closegraph();
}