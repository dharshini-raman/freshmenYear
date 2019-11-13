#include <iostream>
#include <iostream>

using namespace std;

void converter(char c[]){
for(int j = 0; j < 13; j++)
    c[j]=c[j]+4;
}


int main(){
    char cards[] = {'2','3','4','5','6','7','8','9','1','J', 'Q', 'K', 'A'};
    string suit[] = {"Heart","Diamond","Spade","Club"};
    int N;

       do{

        cout<<"Please enter cards you would like to see:"<<endl;
        cout<<"1. Hearts \n2. Diamonds \n3. Spades \n4. Club \n5. Quit \n6. Converter\n";
        cin>>N;
         if ((N < 5)&&(N > 0)){
            for(int i = 0; i < 13; i++){
            cout<<cards[i]<<" of "<<suit[N-1]<<endl;
            }
       }

       else if(N == 6){

        converter(cards);

       }
        else if((N < 0)||(N > 7)){cout<<"Invalid input, please try again!\n";}
        }while(N!= 5);

        return 0;
       }



