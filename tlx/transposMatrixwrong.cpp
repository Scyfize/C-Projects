#include <iostream>
using namespace std;


int main(){

    char matrix[3][3];

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }

    char matrixTransposed[3][3];

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            matrixTransposed[j][i] = matrix[i][j];
        }
    }

    
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(i == 2 && j == 2)
            {
                cout<<matrixTransposed[i][j];
            }
            else
            {
                cout<<matrixTransposed[i][j]<<' ';
            }
            
        }
        cout<<'\n';
    }


    return 0;
}