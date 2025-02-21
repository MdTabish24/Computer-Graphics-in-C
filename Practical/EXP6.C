#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryfill(int x, int y, int bordercolor, int fillcolor){
if(getpixel(x,y) != bordercolor && getpixel(x,y) != fillcolor){
putpixel(x,y,fillcolor);
boundaryfill(x+1,y,bordercolor,fillcolor);
boundaryfill(x,y+1,bordercolor,fillcolor);
boundaryfill(x-1,y,bordercolor,fillcolor);
boundaryfill(x,y-1,bordercolor,fillcolor);
}
}
void main(){
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(50,50,100,100);
boundaryfill(55,55,15,10);
outtextxy(200,200,"Tabish Ansari \n RollNo 04");
getch();
closegraph();
}