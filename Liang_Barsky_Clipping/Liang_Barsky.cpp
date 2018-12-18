#include <iostream>
#include <graphics.h>
using namespace std;

int main(){
    int gd=DETECT,gm,i;
    char* driver=NULL;
    int x1,y1,x2,y2,X_min,X_max,Y_min,Y_max,xx1,xx2,yy1,yy2,dx,dy;
    float t1,t2,p[4],q[4],temp;

    x1=120;
    y1=120;
    x2=300;
    y2=300;
    X_min=100;
    Y_min=100;
    X_max=250;
    Y_max=250;
    initgraph(&gd,&gm,driver);
    rectangle(X_min,Y_min,X_max,Y_max);
    dx=x2-x1;
    dy=y2-y1;
    p[0]=-dx;
    p[1]=dx;
    p[2]=-dy;
    p[3]=dy;
    q[0]=x1-X_min;
    q[1]=X_max-x1;
    q[2]=y1-Y_min;
    q[3]=Y_max-y1;
    for(i=0;i<4;i++){
        if(p[i]==0){
            cout<<"Line is parallel to one of the Clipping boundary.";
            if(q[i]>=0){
                if(i<2){
                    if(y1<Y_min)
                        y1=Y_min;
                    if(y2>Y_max)
                        y2=Y_max;
                    line(x1,y1,x2,y2);
                }
                if(i>1){
                    if(x1<X_min)
                        x1=X_min;
                    if(x2>X_max)
                        x2=X_max;
                    line(x1,y1,x2,y2);
                }
            }
        }
    }
    t1=0;
    t2=1;
    for(i=0;i<4;i++){
        temp=q[i]/p[i];
        if(p[i]<0){
            if(t1<=temp)
                t1=temp;
        }
        else{
            if(t2>temp)
                t2=temp;
        }
    }
    if(t1<t2){
        xx1=x1+t1*p[1];
        xx2=x1+t2*p[1];
        yy1=y1+t1*p[3];
        yy2=y1+t2*p[3];
        line(xx1,yy1,xx2,yy2);
    }
    delay(5000);
    closegraph();
}
