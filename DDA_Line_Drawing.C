#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int gd = DETECT ,gm,i;
    float x, y,dx,dy,m;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the Starting points: ");
    scanf("%d %d", &x0,&y0);
    printf("Enter the Ending points: ");
    scanf("%d %d", &x1, &y1);
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	m = dx;
    }
    else
	   {
	m = dy;
    }
    dx = dx/m;
    dy = dy/m;
    x = x0;
    y = y0;
    i = 1;
    while(i<= m)
    {
	putpixel(x, y, RED);
	x += dx;
	y += dy;
	i=i+1;
    }
    getch();
    closegraph();
}
