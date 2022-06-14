#include<iostream>
#include<vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec;

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    printf("aa %d",vec[2]);
    return 0;
}
