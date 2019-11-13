//Dee Raman
//Davis 4A
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    string x, temp;
    vector<string> groceryList;

    ifstream gfile;
    gfile.open("shoppingList.txt");
    while(gfile)
    {
        getline(gfile, x);
        groceryList.push_back(x);

    }
    gfile.close();

    num = groceryList.size();

    for (int i=0; i<num; i++)
    {
        for(int j = i+1; j<num; j++)
        {
            if(groceryList[i]>=groceryList[j])
            {
                 temp=groceryList[i];
                  groceryList[i]=groceryList[j];
                  groceryList[j]=temp;
            }
        }

    }

    for(int l = 1; l<num; l++)
    {
        cout<<groceryList[l]<<endl;
    }

    return 0;

}
