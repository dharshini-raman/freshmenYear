//Dharshini Raman
//Enloe
//Davis
//Junior 5
#include<iostream>
#include<string>
using namespace std;
int main()

{
    for(int i = 0; i < 5; i++)
    {
        cout<<endl<<i+1<<". ";
        string input;
        int increment = 5;
        int p = 0;
        cin>>input;
        int leng = input.length();
        if(input.find("(")!=-1)
        {
            p = input.find("(");

            while(p+increment<=leng+1)
            {
                cout<<p+increment;
                increment=increment+2;
                if(p+increment<= leng+1)
                {
                    cout<<",";
                }
            }
        }
        if(input.find(")")!=-1)
        {
            p = input.find(")");
            int increment = p-2;
            while(increment>=0)
            {
                if(p-increment>0)
                {
                    int num = (p-increment)-1;
                    if(num>0)
                    {
                        cout<<num;
                    }
                }
                increment=increment-2;
                if(increment>=1)
                {
                    cout<<",";
                }
            }
        }
    }
    return 0;
}
