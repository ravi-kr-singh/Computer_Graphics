#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
   int gd=0,gm;
   int x_centre,y_centre,x,y;
   float p;
   long rad_x,rad_y;
   char* driver=NULL;
   initgraph(&gd,&gm,driver);
   cout<<"Enter centre coordinates of ellipse : ";
   cin>>x_centre>>y_centre;
   cout<<"Enter x,y radius of ellipse : ";
   cin>>rad_x>>rad_y;
   p=rad_y*rad_y-rad_x*rad_x*rad_y+rad_x*rad_x/4;
   x=0;y=rad_y;
   while(2.0*rad_y*rad_y*x<=2.0*rad_x*rad_x*y){
	if(p<0){
		x++;
		p+=2*rad_y*rad_y*x+rad_y*rad_y;
	}
	else{
		x++;
		y--;
		p+=2*rad_y*rad_y*x-2*rad_x*rad_x*y-rad_y*rad_y;
	}
	putpixel(x_centre+x,y_centre+y,GREEN);
	putpixel(x_centre+x,y_centre-y,GREEN);
	putpixel(x_centre-x,y_centre+y,GREEN);
	putpixel(x_centre-x,y_centre-y,GREEN);
   }
   p=rad_y*rad_y*(x+0.5)*(x+0.5)+rad_x*rad_x*(y-1)*(y-1)-rad_x*rad_x*rad_y*rad_y;
   while(y>0){
	if(p<=0){
		x++;
		y--;
		p+=2*rad_y*rad_y*x-2*rad_x*rad_x*y+rad_x*rad_x;
	}
	else{
		y--;
		p-=2*rad_x*rad_x*y+rad_x*rad_x;
	}
	putpixel(x_centre+x,y_centre+y,GREEN);
	putpixel(x_centre+x,y_centre-y,GREEN);
	putpixel(x_centre-x,y_centre+y,GREEN);
	putpixel(x_centre-x,y_centre-y,GREEN);
   }
   getch();
   closegraph();
   return 0;
}
