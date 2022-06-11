#include <iostream>

int main(int argc, char const *argv[])
{   
    int val1,val2;
    std::cout << "input val1 and val2" << '\n';
    std::cin >>val1>>val2;

    std::string s=(val1%val2==0|| val2%val1==0)?"disivible":" not disivible";
    std::cout << s << '\n';
    return 0;
}
