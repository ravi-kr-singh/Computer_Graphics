#include <iostream>
#include <graphics.h>
#include <cmath>
using namespace std;

int main(){
    int gd=0,gm;
    char* driver=NULL;
    float x,y,xmin,xmax,ymin,ymax,xi,xf,yi,yf,t,t1,t2=1;
    cout<<"Coordinates of rectangular clip window :\nxmin,ymin:";
    cin>>xmin>>ymin;
    cout<<"xmax,ymax :";
    cin>>xmax>>ymax;
    cout<<"\n\nCoordinates of line to be clipped :\nInitial:";
    cin>>xi>>yi;
    cout<<"Final:";
    cin>>xf>>yf;
    initgraph(&gd,&gm,NULL);
    rectangle(xmin,ymax,xmax,ymin);
    cout<<"\t\tUnclipped Line : ";
    setcolor(RED);
    line(round(xi),round(yi),round(xf),round(yf));
    getch();
    cleardevice();
    t=(xmin-xi)/(xf-xi);
    if(xf>xi)
        t1=max(t1,t);
    else
        t2=min(t2,t);
    t=(ymax-yi)/(yf-yi);
    if(yi>yf)
        t1=max(t1,t);
    else
        t2=min(t2,t);
    t=(xmax-xi)/(xf-xi);
    if(xi>xf)
        t1=max(t1,t);
    else
        t2=min(t2,t);
    t=(ymin-yi)/(yf-yi);
    if(yf>yi)
        t1=max(t1,t);
    else
        t2=min(t2,t);
    if(t1<t2){
        x=xf;
        y=yf;
        xf=xi+t2*(xf-xi);
        yf=yi+t2*(yf-yi);
        xi+=t1*(x-xi);
        yi+=t1*(y-yi);
        line(round(xi),round(yi),round(xf),round(yf));
    }
    setcolor(WHITE);
    rectangle(xmin,ymax,xmax,ymin);
    cout<<"\t\tClipped Line : ";
    getch();
    closegraph();
}
