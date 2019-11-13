
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    string input;
    int number;
    string output;
    for(int o=0; o<5; o++){
        getline (cin,input);
        number=input[0]-49;
        input.erase(0,2);
        input.erase(remove(input.begin(), input.end(), ' '), input.end());
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        for(int i=0; i<input.size()+1; i++)
        {
            sort(input.begin(), input.begin()+i);
            output.insert(0,1,input[number]);
        }


    sort(output.begin(), output.end());
    output.erase(unique(output.begin(), output.end()), output.end());
    cout<<"Output Is:";
    cout<<output.size();
    output.clear();
    }}
