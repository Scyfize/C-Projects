#include <iostream>

int main(){

    //integer (whole number)
    int x = 7;
    int y = 3;
    int age = 18;

    // double (decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    //string (objects that represent sequences of text)
    std::string name = "Taq";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " Years old" <<'\n';

    std::cout<< initial << '\n';
    std::cout << price << '\n';
    std::cout << x+y;

    return 0;
}