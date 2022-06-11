#include <iostream>
#define byte(x) x
#define kilobyte(y) byte(y)*1024
#define megabyte(z) kilobyte(z)*1024
#define gigabyte(z) megabyte(z)*1024

int main(int argc, char const *argv[])
{
    int inputByte;
    std::cout << "Calculate byte input a file size " << '\n';
    std::cin >>inputByte;
    std::string s=(gigabyte(1)<inputByte)?"input giga":(megabyte(1)<inputByte)?"input mega":(kilobyte(1)<inputByte)?"inputByte kilo ":"byte "  ;
    std::cout << s << inputByte;
    return 0;
}
