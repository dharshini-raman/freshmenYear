#include <iostream>
using namespace std;

int main()
{
	int x;
    int y;
	cout<<"enter value";
	cin>>x;
	y=x;
	int table[x][y];

	//assigns each element
	for (int i = 0; i < x+1; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			table[i][j] = i / j;
		}
	}
	//prints the table
	for (int i = 1; i < x; i++)
	{
		for (int j = 1; j < x; j++)
		{
			cout << table[i][j] << '\t';
		}
	}

	return 0;
}
