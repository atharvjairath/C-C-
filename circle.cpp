
#include <graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	for(int x=0;x<650;x++)
	{
	cleardevice();

	line(10,401,630,401);

	circle(40+x,370, 30);
	circle(150+x, 370, 30);

	line(40+x,370,100+x,370);
	line(40+x,370,60+x,340);
	line(100+x,370,120+x,340);
	line(60+x,340,60+x,335);
	line(55+x,335,65+x,335);

	line(150+x,370,100+x,320);
	line(100+x,320,90+x,320);
	delay(10);
}

	getch();
	closegraph();
	return 0;
}
