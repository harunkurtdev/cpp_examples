#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    int x,y;
    char final_arr[100];
    char x_arr[10];
    char y_arr[25];
    char y_last[25];

    strcpy(x_arr,"-----+");
    strcpy(y_arr,"|     ");
    strcpy(y_last,"|");
    

    std::cout << "You give me a checboard number from 1 to 8 for rows" << '\n';
    std::cin >> x;
    std::cout << "You give me a checboard number from 1 to 8 column" << '\n';
    std::cin >> y ;

    // std::cout << "How much symbol - ?" << '\n';
    
    for (int i = 0; i < y; i++)
    {
        std::cout << "+" ;
        for (int j = 0; j < x; j++)
        {        
            std::cout << x_arr;
            
        }
        std::cout << std::endl;  
        for (int j = 0; j < 3; j++)
        {        
            std::cout << y_arr;
            for (int k = 0; k < x; k++)
            {
                std::cout << y_last<<"     ";
            }
            
            std::cout << std::endl;  
            
        }
    }

    std::cout << "+" ;
    for (int j = 0; j < x; j++)
    {        
        std::cout << x_arr;
    }
    return 0;
}
