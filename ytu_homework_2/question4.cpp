#include <iostream>
#include <math.h>
using namespace std;


typedef struct data
{
    int n;
    double total_val;
    double standart_val;
    double sum;

    data(){
        std::cout << "how to much calculate number" << '\n';
        std::cin >> n;
    };
    
    void take_value(){
        double arr[n];
        for (size_t i = 0; i < n; i++)
        {   double val;
            std::cout << "get value for " <<i+1 << '\n';    
            std::cin >>val ;
            total_val+=val/n;
            arr[i]=val;
        }

        for (size_t i = 0; i < n; i++)
        {
            sum+=pow((arr[i]-total_val),2);
        }

    };

    void standart_devation(){
        standart_val=sqrt(sum/n);
    };
} data;

int main()
{
    data data_val;
    data_val.take_value();
    data_val.standart_devation();
    std::cout << "standart devation calculate : "<< data_val.standart_val << '\n';
}