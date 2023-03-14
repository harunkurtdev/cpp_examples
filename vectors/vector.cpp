#include<iostream>
#include<vector>

int main(int argc, char const *argv[])
{
    // std::vector<int> vec;

    // vec.push_back(5);
    // vec.push_back(6);
    // vec.push_back(7);
    // vec.push_back(8);

    std::vector<int> a{15,12,11};
    // std::vector<int> ax(5,11);

    std::cout<<a[1]; 
    // std::cout<<ax;

    for (auto &i:a)
    {
        std::cout<<i<<std::endl;
        /* code */
    }
    
    for (size_t i = a.begin(); i !=a.end(); i++)
    {
        /* code */
    }
    

    // printf("aa %d",vec[2]);
    return 0;
}
