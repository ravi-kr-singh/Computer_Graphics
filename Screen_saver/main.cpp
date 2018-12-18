
#include <graphics.h>
using namespace std;

int main()
{

    initwindow(GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN));
    int x=getmaxx(),y=getmaxy();

    while(!kbhit()){
        //setfillstyle(rand()%13,rand()%16);
        //int temp_x=rand()%(x/2),temp_y=rand()%y;
        //int temp_x1=temp_x+(rand()%50)+1,temp_y1=temp_y+(rand()%50)+1;
        int temp_x2=rand()%(x/2)+(x/2),temp_y2=rand()%y;
        circle(temp_x2,temp_y2,rand()%30+1);
       // rectangle(temp_x,temp_y,temp_x1,temp_y1);
       // floodfill((temp_x+temp_x1)/2,(temp_y+temp_y1)/2,WHITE);
        setfillstyle(rand()%13,rand()%16);
        floodfill(temp_x2,temp_y2,WHITE);
        //delay(0.00000000001);
    }

     while(!kbhit()){
        setfillstyle(rand()%13,rand()%16);
        int temp_x=rand()%(x/2),temp_y=rand()%y;
        int temp_x1=temp_x+(rand()%50)+1,temp_y1=temp_y+(rand()%50)+1;
        //int temp_x2=rand()%(x/2)+(x/2),temp_y2=rand()%y;
        //circle(temp_x2,temp_y2,rand()%30+1);
       rectangle(temp_x,temp_y,temp_x1,temp_y1);
       floodfill((temp_x+temp_x1)/2,(temp_y+temp_y1)/2,WHITE);
        //setfillstyle(rand()%13,rand()%16);
        //floodfill(temp_x2,temp_y2,WHITE);
        //delay(0.00000000001);
    }
    getch();
    closegraph();
    return 0;
}
