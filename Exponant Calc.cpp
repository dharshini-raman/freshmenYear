//Dee Raman

#include<iostream>
#include<iomanip>
using namespace std;

void input(int b,int e){
cout<<"Welcome to the Exponent Calculator!";
cout<<"Please enter the base: ";
cin>>b;
cout<<"Please enter the exponent: ";
}

int pow(int &x, int y)
{
    if(x > 0)
    {
        x=x*x;
         while(x<=y)
            {
                //cout<<x;
                x++;
            }
    }
    return x;
}
