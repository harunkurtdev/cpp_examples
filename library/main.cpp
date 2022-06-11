#include <iostream>
#include "class.hpp"


int main(int argc, char const *argv[])
{
    
    classX cls(5);

    classX *ptr;

    ptr=&cls;
    cls.print();
    ptr->print();

    return 0;
}
