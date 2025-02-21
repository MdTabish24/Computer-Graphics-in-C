#include<graphics.h>
#include<stdio.h>
void main(){
int i,gd=DETECT,gm,x1,y1,x2,y2,dx,dy,pk;
do
{
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter start coordinate:");
scanf("%d%d",&x1,&y1);
printf("enter the ending co ordinates:");
scanf("%d%d",&x2,&y2);
cleardevice();
dx=x2-x1;
dy=y2-y1;
pk=2*(dy-dx);
do{
putpixel(x1,y1,GREEN);
if(pk<0)
pk+=2*(dy-dx);
else
{
++y1;
pk+=2*(dy-dx); }
++x1; }
while(x1<=x2);
printf("press 'y'for try again...");
outtextxy(200,200,"Tabish Ansari \n RollNo 04"); }
while(getch()=='y'); }