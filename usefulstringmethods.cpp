#include <iostream>

int main(){

    std::string name;

    std::cout<< "Enter your name: ";
    std::getline(std::cin,name);
    
    // if(name.empty())
    // {
    //     std::cout<<"You didnt enter a name!";
    // }
    // else if(name.length()>12)
    // {
    //     std::cout<<"Your name cant be over 12 characters!";
    // }
    // else
    // {
    //     std::cout<<"Welcome "<<name;
    // }

    // name.clear();
    // std::cout<<"Welcome "<<name;

    // name.append("@gmail.com");
    // std::cout<<"Your email address is:  "<<name;

    // std::cout <<name.at(0);

    // name.insert(0,"@");
    // std::cout<<"Your handle is "<<name;

    // std::cout<<name.find(' ');

    name.erase(0,3);
    std::cout<<"Welcome "<<name;

    return 0;
}