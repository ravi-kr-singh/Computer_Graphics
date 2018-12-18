#include <graphics.h>

using namespace std;

int main()
{
    int gd=0,gm;
    char* driver=NULL;
    initgraph(&gd,&gm,driver);
    circle(100,100,50);
    rectangle(200,50,300,130);
    getch();
    closegraph();
    return 0;
}
