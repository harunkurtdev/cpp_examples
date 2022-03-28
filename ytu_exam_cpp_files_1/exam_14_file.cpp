#include <iostream>

int main(int argc, char const *argv[])
{
    int prime_number;


    std::cout << "You must have to input number " << '\n';
    std::cin >> prime_number ;
    bool flag;
    
    for (int i = 2; i <= prime_number/2; i++)
    {
        if(prime_number%i==0){
            flag=true;
            break;
        }
        
    }
    
    if (flag==false)
    {
        std::cout << "This number " << prime_number << " is prime." << '\n';
    }
    else
    {
        std::cout << "This number " << prime_number << " is not prime." << '\n';
    }
    

    return 0;
}
