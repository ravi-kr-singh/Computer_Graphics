#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{

    initwindow(GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN));
    int x=getmaxx(),y=getmaxy();


    line(10,y-150,x/6,y/2+40);
    line(x/6,y/2+40,10+(2*x)/6,y-150);
    line(10+x/3,y-150,x/2,y/2+40);
    line(x/2,y/2+40,2*(x/3),y-150);
    line(2*(x/3),y-150,5*(x/6),y/2+40);
    line(5*(x/6),y/2+40,x-10,y-150);
    line(0,y-150,x,y-150);
    line(0,y,x,y);
    line(0,y-150,0,y);
    line(x,y-150,x,y);

    setfillstyle(9,BROWN);
    floodfill(x/6,y-175,WHITE);
    floodfill(x/2,y-175,WHITE);
    floodfill((5*x)/6,y-175,WHITE);

    setfillstyle(9,GREEN);
    floodfill(x/6,y-15,WHITE);

    setfillstyle(9,WHITE);
    circle(125,125,50);
    floodfill(125,125,WHITE);

    while(!kbhit()){

        setfillstyle(9,WHITE);
        int temp_x=rand()%(x-21)+250,temp_y=rand()%((y/3)+21)+21;
        circle(temp_x,temp_y,5);
        floodfill(temp_x,temp_y,WHITE);
        delay(300);
    }

    getch();
    closegraph();
    return 0;
}
