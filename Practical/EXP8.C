#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int ch,i,j;
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=1;i<=12;i++){
circle(300,250,100);
ellipse(260,220,0,360,12,12-i);
ellipse(340,220,0,360,12,12-i);
for(j=1;j<=5;j++){
arc(300,270,250-j*i,290+j*i,50); }
delay(500);
cleardevice();
outtextxy(400,400,"Tabish Ansari \n RollNo 04");
}
getch();
closegraph(); }
