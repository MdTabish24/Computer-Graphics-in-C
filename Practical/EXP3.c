#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
void main(){
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
outtextxy(200,200,"Tabish Ansari \n RollNo 04");
printf("enter the value of x1 and y1: ");
scanf("%f%f" ,&x1,&y1);
printf("enter the value of x2 and y2:" );
scanf("%f%f" ,&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy){ step=dx; }
else{ step=dy; }
dx=dx/step;
dy=dy/step;
i=1;
while(i<=step){
putpixel(x,y,i);
x=x+dx;
y=y+dy;
i=i+1;
delay(100); }
getch();
closegraph(); }