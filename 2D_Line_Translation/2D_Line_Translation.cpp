#include<iostream>
#include<graphics.h>

using namespace std;

void translateLine ( int P[][2], int T[]){
    int gd=0,gm;
    char* driver=NULL;
    initgraph (&gd,&gm,driver);
    setcolor (GREEN);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
    setcolor(3);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);
    getch();
    closegraph();
}

int main()
{
    int x1,y1,x2,y2,tx,ty;
    cout<<"Enter the first co-ordinate of a line:";
	cin>>x1>>y1;
	cout<<"Enter the second co-ordinate of a line:";
	cin>>x2>>y2;
	cout<<"Enter the translation vector:";
	cin>>tx>>ty;
    int P[2][2]={x1,y1,x2,y2};
    int T[]={tx,ty};
    translateLine(P,T);
    return 0;
}
