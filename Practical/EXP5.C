#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int x0, int y0, int radius){
	int x=radius;
	int y = 0;
	int p;
	while(x>=y){
		putpixel(x0+x,y0+y,7);
		putpixel(x0+y,y0+x,7);
		putpixel(x0-x,y0+y,7);
		putpixel(x0-y,y0+x,7);
		putpixel(x0-x,y0-y,7);
		putpixel(x0-y,y0-x,7);
		putpixel(x0+x,y0-y,7);
		putpixel(x0+y,y0-x,7);		
		if(p<=0){	
			y=y+1;
			p=p+2*y+1;
			} else{
	x=x-1;
	p=p-2*x+1; }}}
void main(){
int gd = DETECT,gm,color;
int i,x,y,radi;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(300,300,"Fatima Momin");
outtextxy(300,320,"Roll No: 66");
printf("Enter the center cors of the circle: ");
scanf("%d%d",&x,&y);
printf("Enter the RADIUS of the Circle: ");
scanf("%d",&radi);
drawcircle(x,y,radi);
getch();
closegraph();
}