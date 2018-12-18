
#include <iostream>
#include <graphics.h>
using namespace std;

void Draw(int temp_x,int temp_y,int x,int y){
    putpixel(x+temp_x,y+temp_y,GREEN);
    putpixel(x+temp_x,y-temp_y,GREEN);
    putpixel(x-temp_x,y+temp_y,GREEN);
    putpixel(x-temp_x,y-temp_y,GREEN);
    putpixel(x+temp_y,y+temp_x,GREEN);
    putpixel(x-temp_y,y+temp_x,GREEN);
    putpixel(x+temp_y,y-temp_x,GREEN);
    putpixel(x-temp_y,y-temp_x,GREEN);

}

void Circle(int r,int x,int y){
    int p;
    int temp_x=0,temp_y=r;
    p=1-r;
    Draw(temp_x,temp_y,x,y);
    while(temp_x<=temp_y){
        temp_x++;
        if(p<0)
            p+=2*temp_x+1;
        else{
            p+= 2*(temp_x-temp_y)+1;
            temp_y--;
        }
        Draw(temp_x,temp_y,x,y);
    }

}

int main()
{
    int gd=0,gm,r,x_centre,y_centre;
    char* driver=NULL;
    initgraph(&gd,&gm,driver);
    cout<<"Enter Coordinates of centre of circle : ";
    cin>>x_centre>>y_centre;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cleardevice();
    Circle(r,x_centre,y_centre);
    getch();
    closegraph();
    return 0;
}


