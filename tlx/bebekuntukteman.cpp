#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a >> b;
    int remaining = a%b;
    int divide = a/b;
    cout<<"masing-masing "<<divide<<'\n';
    cout<<"bersisa "<<remaining;


    return 0;
}