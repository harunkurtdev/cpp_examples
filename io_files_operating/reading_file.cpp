#include<iostream>
#include <fstream>

int main(int argc, char const *argv[])
{

    std::ifstream inputFile("file.txt");

    char* str;
    char* strx;
    char* stry;

    if (!inputFile)
    {
        std::cout << "cannot opened file" << '\n';
        return 1;
    }

    inputFile>>str;
    inputFile>>stry;
    
    std::cout << str<<" veri str   " <<stry <<" veri  stry"<< '\n';

    inputFile.close();
    /* code */
    return 0;
}
