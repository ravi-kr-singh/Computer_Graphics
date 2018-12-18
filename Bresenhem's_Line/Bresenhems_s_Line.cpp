#include <iostream>
#include <graphics.h>
using namespace std;


void Bresenhems_line(int Xi,int Yi,int Xf,int Yf){
    float slope=(Yf-Yi)/(Xf-Xi);
    if(slope>-1 && slope<=1){
        int Pk=2*(Yf-Yi)-(Xf-Xi);
        for(;Xi<=Xf;++Xi){
            int temp=Yi;
            putpixel(Xi,Yi,GREEN);
            if(Pk>=0){
                Yi++;
            }
            Pk+=2*(Yf-Yi)-2*(Xf-Xi)*(Yi-temp);
        }
    }
    else{
        int Pk=2*(Xf-Xi)-(Yf-Yi);
        for(;Yi<=Yf;++Yi){
            int temp=Xi;
            putpixel(Xi,Yi,GREEN);
            if(Pk>=0){
                Xi++;
            }
            Pk+=2*(Xf-Xi)-2*(Yf-Yi)*(Xi-temp);
        }

    }

}

int main()
{
    int x1,y1,x2,y2,gd=0,gm;
    cout<<"Enter starting pt : ";
    cin>>x1>>y1;
    cout<<"Enter ending pt : ";
    cin>>x2>>y2;
    char* driver=NULL;
    initgraph(&gd,&gm,driver);
    if(y2>=y1)
        Bresenhems_line(x1,y1,x2,y2);
    else
        Bresenhems_line(x2,y2,x1,y1);
    getch();
    closegraph();
    return 0;
}
