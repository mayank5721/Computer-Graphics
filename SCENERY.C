#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");

rectangle(0,0,639,252);
setfillstyle(SOLID_FILL,CYAN);
floodfill(2,2,WHITE);

outtextxy(23,432,"Mayank");
outtextxy(23,443,"CSE-1");
outtextxy(23,453,"05411502720");


//Left Cloud
setcolor(WHITE);
circle(123,93,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(123,93,WHITE);
circle(153,92,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(153,92,WHITE);
circle(173,119,25);
setfillstyle(SOLID_FILL,WHITE);
floodfill(173,119,WHITE);
circle(153,156,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(153,156,WHITE);
circle(123,156,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(123,156,WHITE);
circle(107,119,25);
setfillstyle(SOLID_FILL,WHITE);
floodfill(107,119,WHITE);
circle(140,125,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(140,125,WHITE);

//Right Cloud
setcolor(WHITE);
circle(550,50,20);
setfillstyle(SOLID_FILL,WHITE);
floodfill(550,50,WHITE);
circle(580,50,20);
floodfill(580,50,WHITE);
circle(530,80,25);
floodfill(530,80,WHITE);
circle(550,110,25);
floodfill(550,110,WHITE);
circle(580,110,20);
floodfill(580,110,WHITE);
circle(595,80,25);
floodfill(595,80,WHITE);
circle(565,80,20);
floodfill(565,80,WHITE);


//Mountains
line(0,252,102,57);
line(102,57,192,226);
line(192,226,261,94);
line(261,94,324,222);
line(324,222,374,124);
line(374,124,428,235);
line(428,235,529,17);
line(529,17,639,252);
line(0,252,639,252);
setfillstyle(SOLID_FILL,BROWN);
floodfill(122,207,WHITE);

//Sun
ellipse(338,117,-50,200,116,116);
setfillstyle(SOLID_FILL,RED);
floodfill(338,117,WHITE);
ellipse(338,117,-47,195,106,106);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(338,117,WHITE);

//Birds
setcolor(BLACK);
arc(357,82,0,60,22);
arc(401,82,120,180,22);

arc(40,120,0,60,22);
arc(84,120,120,180,22);

arc(130,50,0,60,22);
arc(174,50,120,180,22);

arc(550,100,0,60,22);
arc(594,100,120,180,22);

//House
setcolor(RED);
line(356,329,397,271);
line(397,271,434,329);
line(356,329,356,469);
line(434,329,434,469);
line(356,469,434,469);
setfillstyle(SOLID_FILL,RED);
floodfill(357,330,RED);

setcolor(BROWN);
line(397,271,434,329);
line(397,271,521,271);
line(434,329,561,329);
line(521,271,561,329);
setfillstyle(INTERLEAVE_FILL,BROWN);
floodfill(436,328,BROWN);

setcolor(RED);
line(434,329,434,469);
line(434,329,561,329);
line(561,329,561,469);
line(434,469,561,469);
setfillstyle(INTERLEAVE_FILL,RED);
floodfill(436,330,RED);

//House Door
setcolor(YELLOW);
line(375,392,413,392);
line(375,392,375,469);
line(375,469,413,469);
line(413,392,413,469);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(376,393,YELLOW);

//House Windows
line(457,360,481,360);
line(457,360,457,390);
line(457,390,481,390);
line(481,360,481,390);
line(519,360,543,360);
line(519,360,519,390);
line(519,390,543,390);
line(543,360,543,390);
line(457,420,481,420);
line(457,420,457,450);
line(457,450,481,450);
line(481,420,481,450);
line(519,420,543,420);
line(519,420,519,450);
line(519,450,543,450);
line(543,420,543,450);
setfillstyle(INTERLEAVE_FILL,YELLOW);
floodfill(458,361,YELLOW);
floodfill(520,361,YELLOW);
floodfill(520,421,YELLOW);
floodfill(458,421,YELLOW);

circle(396,321,20);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(396,321,YELLOW);

setcolor(BLACK);
circle(384,432,4);
setfillstyle(SOLID_FILL,BLACK);
floodfill(384,432,BLACK);

//Upper Green
setcolor(LIGHTGREEN);
line(0,284,387,284);
line(387,284,397,271);
line(397,271,521,271);
line(521,271,530,284);
line(530,284,639,284);
line(0,252,0,284);
line(0,252,639,252);
line(639,252,639,284);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(2,256,LIGHTGREEN);



//River
setcolor(BLUE);
line(0,284,387,284);
line(530,284,639,284);
line(0,284,0,385);
line(387,284,356,329);
line(356,329,356,414);
line(639,284,639,383);
line(530,284,561,329);
line(561,329,561,402);
line(0,385,356,414);
line(561,402,639,383);
setfillstyle(SOLID_FILL,BLUE);
floodfill(2,286,BLUE);
floodfill(636,286,BLUE);

//Tree
setcolor(BROWN);
arc(-30,450,350,35,150);
arc(300,450,145,190,150);
line(115,475,159,479);
line(93,365,175,365);
setfillstyle(SOLID_FILL,BROWN);
floodfill(130,420,BROWN);

setcolor(GREEN);
line(93,365,135,395);
line(135,395,175,365);
line(175,365,93,365);
setfillstyle(SOLID_FILL,GREEN);
floodfill(135,375,GREEN);
circle(90,365,25);
setfillstyle(SOLID_FILL,GREEN);
floodfill(88,380,GREEN);
circle(140,320,50);
floodfill(140,320,GREEN);
circle(77,320,25);
floodfill(77,320,GREEN);
circle(100,275,30);
floodfill(82,290,GREEN);
circle(145,250,25);
floodfill(145,250,GREEN);
circle(180,280,25);
floodfill(180,270,GREEN);
circle(195,320,25);
floodfill(195,310,GREEN);
circle(185,360,25);
floodfill(185,350,GREEN);


setcolor(MAGENTA);
circle(100,360,10);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(100,360,MAGENTA);
circle(136,273,12);
floodfill(136,273,MAGENTA);
circle(178,308,9);
floodfill(178,308,MAGENTA);
circle(169,375,12);
floodfill(169,375,MAGENTA);
circle(112,307,7);
floodfill(112,307,MAGENTA);



getch();
closegraph();
}