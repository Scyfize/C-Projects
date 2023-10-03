#include <iostream>
using namespace std;

int main()
{

    int number;

    do
    {
        cout<<"Enter a postive number: ";
        cin>>number;
        
    }while(number < 0);

    cout<<"The number is: "<<number;

    return 0;
}