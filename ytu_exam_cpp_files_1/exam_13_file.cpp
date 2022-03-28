#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int n,fibarr=0;
    int a,b=1;
    
    std::cout << "you have must n number " << '\n';
    std::cin >> n;
    
    for(int index = 0;index < n;index++)
    {
        a=b;
        b=fibarr;
        fibarr=a+b;
        
        std::cout << fibarr << '\n';

    }

    return 0;
}
