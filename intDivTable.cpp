//Dee Raman
//2D arrays project
//Davis 4A

#include<iostream>;

using namespace std;

int main()
{
    int table[6][6]= {0};
    int value, column, row;
    cout << "Enter the start value of your table: ";
    cin>>value;
    cout << endl;
    for(int i=1; i<6; i++)
    {
        table[i][0]=((value-1)+i); //MAKES THE Y AXIS
        table[0][i]=((value-1)+i); //MAKES THE X AXIS
    }
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(i!=0&&j!=0)
            {
                table[i][j]=(table[0][j]/table[i][0]);
            }
            cout<<table[i][j] << "\t";
        }
        cout<<endl;
    }
    cout << "Enter you Row and Column Value: ";
    cin>>row>>column;
    cout<<(table[row][column]) << endl;
    return 0;
}
