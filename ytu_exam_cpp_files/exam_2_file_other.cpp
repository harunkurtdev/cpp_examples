#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int name_;
    std::cout << "How much name" << '\n';
    std::cin >> name_;

    string name[name_];    

    for (size_t i = 0; i < name_; i++)
    {
        std::cout << "plae input name" << '\n';
        std::cin >> name[i];

        // (std::isalpha(name[i])!=true)?std::cout << "string" << '\n':std::cout << "string" << '\n';
        
    }   

    return 0;
}
