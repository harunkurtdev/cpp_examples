#include <iostream>
#include<fstream>


int main(int argc, char const *argv[])
{

    std::ofstream out("file.txt");

    if (!out)
    {
        std::cout << "not opened file" << '\n';
        return 1;
        /* code */
    }

    out<<"file xx"<<std::endl;

    out.close();
    

    /* code */
    return 0;
}
