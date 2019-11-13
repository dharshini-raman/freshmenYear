#include <ctype.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


using namespace std;

int sortString(string &output, string input, int position, int temp)
{
    int x=0;
    char spot1, spot2, spot3, spot4;
    output+=input[temp+1];

    for(int i=temp+1; i<input.length(); i++)
    {
        if(input[i+1]!=' ')
        {
            output+=input[i+1];
        }
        spot1=output[position];

        for(int j=1; j<output.length(); j++)
        {
            for(int k=1; k<output.length(); k++)
            {
                spot3=output[k-1];
                spot4=output[k];
                if(spot4<spot3)
                {
                    output[k-1]=spot4;
                    output[k]=spot3;
                }
            }
        }
        spot2=output[position];

        if(spot1!=spot2)
        {
            x++;
        }
    }
    return x;
}
void convert(string &s)
{
    for(int i=0; i<s.length(); i++)
    {
        s[i]=toupper(s[i]);
    }
}

int main()
{

    string input;

    ifstream myfile;
    myfile.open("word.txt", ifstream::in);
    getline(myfile, input);

    for (int i=0; i<5; i++)
    {
        string output;
        int position, temp;
        char number[1];
        convert(input);
        temp=input.find(' ');

        for (int i=0; i<temp; i++)
        {
            number[i]=input[i];
        }

        position=atoi(number);
        int finaloutput=sortString(output, input, position, temp);

        cout<<"Input: "<<input<<" = "<<finaloutput<<endl<<endl;

        getline(myfile, input);
    }
    return 0;
}
