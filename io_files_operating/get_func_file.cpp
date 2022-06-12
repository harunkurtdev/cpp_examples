/**
 * @file get_func_file.cpp
 * @author your name (you@domain.com)
 * @brief Dissplay a file usig set
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{
    char ch;

    std::ifstream in("file.txt",std::ios::in|std::ios::binary);
    if (!in)
    {
        std::cout << "not opened the file." << '\n';
        return 1;
        /* code */
    }
    
    while (in)
    {
        in.get(ch);
        if (in)
        {
           std::cout << ch << '\n';
        }
        
        /* code */
    }
    
    in.close();
    
    /* code */
    return 0;
}
