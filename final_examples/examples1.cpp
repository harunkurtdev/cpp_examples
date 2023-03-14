#include <iostream>

int main(int argc, char const *argv[])
{
    // int a[]={1,2},*p=a;
    // std::cout<<p[1]; //2

    // int i=13,j=60;
    // i^=j;
    // j^=i;
    // i^=j;
    // std::cout<<i<<"   "<<j; //60 13

//     union abc
//     {
//         int x;
//         char ch;
//    } var;

//    var.x=15;
//    var.ch='A';

//    std::cout<<var.ch<<std::endl; //A

unsigned int x;
int& fs() {
    return x;
}
    fs()=15;
    std::cout<<x;
    return 0;
}
