#include <conio.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{


    vector<int> vec;

    int num;
    ifstream myfile;
    myfile.open("project2.txt");
    while(myfile)
    {
        myfile >> num;
        vec.push_back(num);
    }
    myfile.close();
    int hold;
    int k = vec.size();
    for(int i=0; i<k-1; i++)
    {
        for(int j=0; j<k-1; j++)
        {
            if(vec[j]>vec[j+1])
            {
                hold=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=hold;
            }
        }
    }
    cout<<"Sorted Vector is: "<<endl;
    for(int i=0; i<k; i++)
    {
        cout<<vec[i]<<endl;
    }

    getch();
}
