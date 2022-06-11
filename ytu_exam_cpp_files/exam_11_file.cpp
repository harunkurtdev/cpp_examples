#include<iostream>
#include<cstdio>
#define honderds 100
#define tens 10
#define ones 1


int main(int argc, char const *argv[])
{
    
    char str_numbers[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int input_value;
    
    std::cout << "You must to input a value" << '\n';
    std::cin >> input_value;

    std::cout << '\n';
    std::cout << (input_value/honderds)<<std::endl;
    std::cout << ((input_value%honderds)/tens)<<std::endl;
    std::cout << (((input_value%honderds)%tens)/ones)<<std::endl;

    std::cout << '\n';

    std::cout <<"You input values characters "<< str_numbers[(int)(input_value/honderds)] << "\t"<< str_numbers[((input_value%honderds)/tens)] << "\t"<< str_numbers[(((input_value%honderds)%tens)/ones)] ;

    return 0;
}
