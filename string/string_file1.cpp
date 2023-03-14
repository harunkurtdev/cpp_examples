#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    // std::string s("sude",1,2);
    // std::cout<<s<<std::endl;

    std::string s("sude");

    std::cout<<s<<std::endl;
    std::cout<<s.find("e")<<std::endl;
    std::string x;
    // std::getline(std::cin,x);
    // printf("%s \n",x);
    // std::cout << x <<std::endl;

    s.swap(x);
    std::cout << x <<std::endl;

    
    return 0;
}
