#include <iostream>
#include <graphics.h>
#include <cmath>
using namespace std;

int main(){
	int gd=0,gm,x1,x2,y1,y2,x4,y4;
	char* driver=NULL;
	initgraph(&gd,&gm,driver);
	float angle=0,ang;
	cout<<"Enter the first coordinate of a line:";
	cin>>x1>>y1;
	cout<<"Enter the second coordinate of a line:";
	cin>>x2>>y2;
	line(x1,y1,x2,y2);
	cout<<"Enter rotation angle:";
	cin>>ang;
	angle=(ang*3.14)/180;
	setcolor(GREEN);
	x4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
	y4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));
	line(x2,y2,x4,y4);
	getch();
	closegraph();
	return 0;
}
