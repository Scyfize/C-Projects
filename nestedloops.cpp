#include <iostream>
using namespace std;
int main()
{

    int rows;
    int columns;
    char symbol;

    cout<<"How many rows? ";
    cin>>rows;

    cout<<"How many columns? ";
    cin>>columns;

    cout<<"Enter a symbol to use: ";
    cin>>symbol;

    for(int j=1;j<=rows;j++)
    {
        for(int i=1;i<=columns;i++)
        {
            cout<<symbol;
        }
        cout<<'\n';
    }
    

    return 0;
}