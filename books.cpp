#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct BOOK
{
    string title;
    int pages;
    string author;
    bool checkIN;
};

int main()
{

    vector <BOOK> library;
    BOOK temp;
    int ans;
    cout<<"How many books would you like to check in?";
    cin>>ans;
    for(int i=0; i<number; i++)
    {

        cout<<"Please enter a title, pages, & author "<<endl;
        cin.ignore();
        getline(cin,temp.title);
        cin>>temp.pages;
        cin.ignore();
        getline(cin,temp.author);
        temp.checkIN=1;
        library.push_back(temp);

    }


cout<<"Title \t Pages\t Author"<<endl;
    for(int i = 0; i<library.size; i++)
    {
        cout<<library[i].title<<"\t"<<library[i].pages<<"\t"<<library[i].author<<endl;
    }

    return 0;
}
