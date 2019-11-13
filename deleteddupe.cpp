#include<iostream>
#include<string>
#include<vector>

using namespace std;

int repeatCheck(string word, int i)
{
   int a=0;
   while(word[i]!=word[a] && a<=i)
   {
       a++;
   }

   if(a==i)
   {
       return(1);
   }
   else
   {
       return(0);
   }
}

int main()
{
   string word;
   cin>>word;
   vector <char> wd(1, word[0]);

   int l=word.length();
   for(int i=1; i<l; i++)
   {
       if(repeatCheck(word, i)==1)
       {
           wd.push_back(word[i]);
       }
   }

   l=wd.size();
   for(int i=0; i<l; i++)
   {
       cout<<wd[i];
   }

   cout<<" "<<l;

   return 0;
}
