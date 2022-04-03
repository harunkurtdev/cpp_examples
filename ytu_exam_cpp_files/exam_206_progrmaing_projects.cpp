#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{

char value_input[5];
const char value[7][3]={"Mo","Tu","We","Th","Fr","Sa","Su"};
std::cin >> value_input;

// const string value_s=value_input;

for (size_t i = 0; i < 7; i++)
{
    !strcmp(value_s,value[2])?std::cout << value[i] << '\n':std::cout << "aa" << '\n';
}


    return 0;
}
