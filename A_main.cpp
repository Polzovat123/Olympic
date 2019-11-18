#include <iostream>
#include <cmath>

using namespace std;

int x,y,x2,y2;
float s;

float find_tabs(int r,int f, int r1, int f1){
    float dl1=r;r-=r;r1-=r;
    float dl2=f;f-=f;f1-=f;
    double A,B,C;
    A=-2*r1;
    B=-2*f1;
    C=r1*r1+f1*f1;
    //Имеем уравнение прямой и точки, а теперь расмотрим его более подробно.
    double x0=(-1)*(A*C)/(A*A+B*B);
    double y0=(-1)*(B*C)/(A*A+B*B);
    cout<<x0<<" "<<y0;
    return 0;
}

float find_length(float l, float h, float l1, float h1)
{

}
float find_cos(){

}
float find_alpha(){

}

int main()
{
    cin>>x>>y;
    cin>>x2>>y2;
    find_tabs(x,y,x2,y2);
    float len_center = sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    if(len_center>200){
        //cout<<0;
    }else{

    }
    return 0;
}
