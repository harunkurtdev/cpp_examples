#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{

    int n[5];

    register int t;

    std::ofstream out("fileout.txt",std::ios::out|std::ios::binary);
    if (!out)
    {
        std::cout << "not opened file." << '\n';
        return 1;
        /* code */
    }

    out.write((char*)&n,sizeof n);
    
    out.close();

    for (t = 0; t < 5; t++)
        n[t]=0;

    std::ifstream in("fileout.txt",std::ios::in|std::ios::binary);
    if (!in)
    {
        std::cout << "not opened file" << '\n';
        return 1;
        /* code */
    }
    
    in.read((char*)&n,sizeof n);

    for (t = 0; t< 5; t++)
        std::cout << n[t] << '\n';
    
    in.close();

    /* code */
    return 0;
}
