//Dee Raman
//9/18/17 3a
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double distCalc(int ax,int ay,int bx,int by)
{
    double d;
    d=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    return d;
}
double midCalc(int a,int b)
{
    double p = (a+b)/2.0;
    return p;
}
double slope(int xone,int xtwo,int yone,int ytwo)
{
    double(x1);
   double(x2);
    double(y1);
    double(y2);



    double s = (ytwo-yone)/(xtwo-xone);
    return s;
}
void output(double d,double x,double y,double s)
{

    cout<<setprecision(3);
    cout.setf(ios::showpoint|ios::fixed);
    cout<<"your distance is: "<<d<<setw(10)<<endl;
    cout<<"your x coordinate of the midpoint is: "<<x<<setw(10)<<endl;
    cout<<"your y coordinate of the midpoint is: "<<y<<setw(10)<<endl;
    cout<<"your slope is: "<<s<<setw(10)<<endl;


}



int main()
{

    cout.setf(ios::showpoint|ios::fixed);
    cout<<setw(10);

    int y1;
    int x2;
    int y2;
    int x1;



    cout<<"Enter point x1: ";
    cin>>x1;
    cout<<"Enter point y1: ";
    cin>>y1;
    cout<<"Enter point x2: ";
    cin>>x2;
    cout<<"Enter point y2: ";
    cin>>y2;
    double dist=distCalc(x1,y1,x2,y2);
    int xpt=midCalc(x1,x2);
    int ypt=midCalc(y1,y2);
    double spt=slope(x1,x2,y1,y2);
    output(dist,xpt,ypt,spt);
    return 0;
}







