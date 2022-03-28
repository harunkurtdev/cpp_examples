#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

int main(int argc, char const *argv[])
{
    int x,y;
    char y_last='|';
    int symbol_;
    int symbol_b;

    // strcpy(x_arr,"-----+");
    // strcpy(y_arr,"|     ");
    // strcpy(y_last,"|");
    
    std::string value_symbol_;
    std::string value_symbol_b="|";
    std::string value_symbol_e;

    std::cout << "You give me a checboard number from 1 to 8 for rows" << '\n';
    std::cin >> x;
    std::cout << "You give me a checboard number from 1 to 8 column" << '\n';
    std::cin >> y ;

    std::cout << "How much symbol - ?" << '\n';
    std::cin >> symbol_;
    std::cout << "How much symbol | ?" << '\n';
    std::cin >> symbol_b;

    for (int m = 0; m < symbol_; m++)
    {

        value_symbol_ +="-";
        value_symbol_b+=" ";
        value_symbol_e+=" ";
        /* code */
    }

    for (int i = 0; i < y; i++)
    {
        std::cout << "+" ;
        for (int j = 0; j < x; j++)
        {        
            std::cout << value_symbol_ + "+";
        }
        std::cout << std::endl;  
        for (int j = 0; j < symbol_b; j++)
        {        
            std::cout << value_symbol_b;
            for (int k = 0; k < x; k++)
            {
                std::cout << y_last<<value_symbol_e;
            }
            std::cout << std::endl;  
        }
    }

    std::cout << "+" ;
    for (int j = 0; j < x; j++)
        {        
            std::cout << value_symbol_ + "+";
            
        }
    return 0;
}
