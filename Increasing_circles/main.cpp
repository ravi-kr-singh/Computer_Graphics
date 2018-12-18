#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    initwindow(x,y);
    int radius=20;
    while(2*radius<y-200){
        setfillstyle(rand()%13,rand()%16);
        circle(x/2,y/2,radius);
        floodfill(x/2+radius-2,y/2,WHITE);
        delay(300);
        radius+=40;

    }
    getch();
    closegraph();
    return 0;
}
