#include<iostream>
using namespace std;

int main()
{
    int n;
     cout<<"Enter number of inputs: ";
     cin>>n;
     cout<<endl;

    double numbers[n];
    for(int i=0;i<n;i++)
    {
        cout<<i*i;
        cin>>numbers[i];

    }
    cout<<endl;
    double sum = numbers[0];

   for(int i=1;i<100;i++)
    {
         sum = sum +numbers[i];

    }

cout<<"Sum: "<<sum<<endl<<endl;
double avg =(sum/n);
cout<<"Average: "<<avg<<endl;

return 0;
}
