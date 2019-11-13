
//Dee Raman
//10-23 Per 4A

#include<iostream>

using namespace std;

int main()
{
    int k;

    cout<<"Please enter the size of your box:";
    cin>>k;

    int x=0;
    while (x<k+2)
    {
        if(x==0)
        {
            int m=0;

            cout<<"+";

            while(m<k)
            {
                cout<<"/\\";
                m++;
            }

            cout<<"+";
            cout<<endl;
        }





        else if(x!=k+1)
        {
            int n=0;

            cout<<"|";

            while(n<k)
            {
                cout<<"  ";
                n++;
            }

            cout<<"|";
            cout<<endl;
        }





        else
        {
            int p=0;

            cout<<"+";

            while(p<k)
            {
                cout<<"/\\";
                p++;
            }

            cout<<"+";
            cout<<endl;
        }


        x++;
    }
    return 0;
}
