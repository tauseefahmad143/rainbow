#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int	x=320,y=240,r;
	initgraph(&gd,&gm,(char*)"");
    for(r=20;r<230;r++)
    {
    	setcolor(r-10);
    	arc(x,y,0,180,r);
	}
	getch();
	closegraph();
}
