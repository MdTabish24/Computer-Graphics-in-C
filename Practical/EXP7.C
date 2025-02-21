#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void translate();
void scale();
void main(){
int ch;
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(6);
outtextxy(100,88,"OBJ BEFORE");
rectangle(100,150,150,100);
printf("---------------MENUUUUU--------------------");
printf("\n1)Translation\n2)Scale\nEnter your choiCE");
scanf("%d",&ch);
cleardevice();
switch(ch)
{ case 1: translate();
break;
case 2: scale();
break;
default: printf("galat choice");
break; }
outtextxy(200,200,"Tabish Ansari \n RollNo 04");
getch();
closegraph(); }
void translate(){
 int tx,ty;
 setcolor(2);
 outtextxy(240,19,"Translation");
 printf("\nEnter tx: ");
 scanf("%d",&tx);
 printf("\nEnter ty: ");
 scanf("%d",&ty);
 cleardevice();
 rectangle(100,150,150,100);
 printf("After translation");
 rectangle(100+tx,150+ty,150+ty,100+ty); }
 void scale(){
 int sx,sy;
 setcolor(2);
 outtextxy(240,19,"Scaling--------------");
 printf("\nEnter sx: ");
 scanf("%d",&sx);
 printf("Enter sy:");
 scanf("%d",&sy);
 cleardevice();
 rectangle(100,150,150,100);
 printf("After scaling");
 rectangle(100*sx,150*sy,150*sx,100*sy); }
