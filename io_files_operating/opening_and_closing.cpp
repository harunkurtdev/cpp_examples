#include<iostream>
#include <fstream>

int main(int argc, char const *argv[])
{

    std::fstream myfile;
    myfile.open("test");
    if (!myfile)
    {
        std::cout<<"file not opened";
    }
    
    myfile.close();
    /* code */
    return 0;
}
