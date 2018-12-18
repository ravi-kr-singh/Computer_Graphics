#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void DDA_line(float Xi,float Yi,float Xf,float Yf){
  float slope=(Yf-Yi)/(Xf-Xi);
  if(slope>-1 && slope<=1){
    for(;Xi<=Xf;++Xi){
      putpixel(Xi,round(Yi),GREEN);
      Yi+=slope;
    }
  }
  else{
    for(;Yi<=Yf;++Yi){
      putpixel(round(Xi),Yi,GREEN);
      Xi+=(1/slope);
    }
  }

}


int main(){
  float x1,y1,x2,y2;
  int gd=0,gm;
  char* driver=NULL;
  cout<<"Enter Starting point of line : ";
  cin>>x1>>y1;
  cout<<"Enter End point of line : ";
  cin>>x2>>y2;
  initgraph(&gd,&gm,driver);
  if(y2>=y1)
    DDA_line(x1,y1,x2,y2);
  else
    DDA_line(x2,y2,x1,y1);
  getch();
  closegraph();
  return 0;
}
