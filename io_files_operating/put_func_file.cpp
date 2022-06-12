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
#include<string>

int main(int argc, char const *argv[])
{
    // char ch;
    //std::string ch;

    const char* p = "hello world \n";
    std::ofstream out("file.txt",std::ios::out|std::ios::binary);
    if (!out)
    {
        std::cout << "not opened the file." << '\n';
        return 1;
        /* code */
    }
    
    while (*p) out.put(*p++);
    
    out.close();
    
    /* code */
    return 0;
}
