#include <iostream>
#include<algorithm>
#include <math.h>

int count;

void printf_val(int *arr,int *arr2){
    std::cout << "N"<<"\t"<<"count" << '\n';

    int val_count=1;
    for (size_t i = 0; i < count; i++)
    {
        // std::cout << *(arr+i);

        for (size_t j = 0; j < count; j++)
        {
            for (size_t k = j+1; k < count; k++)
            {
                if(*(arr+j)==*(arr+k)){
                if(val_count==1&&arr[k]!=' '){

                }
                arr[j]=' ';
                val_count++;  
                }
            }
            val_count=1;
        }
        if(*(arr+i)!=' '){
        std::cout <<*(arr2+i)<<"\t";
        std::cout<<std::count(arr2,arr2+count,*(arr2+i))<<std::endl;
            
        }
        // for (; arr != arr+count; ++arr) {
        //     if (*arr == *(arr+i)) {
        //         ++val_count;
        //     }
        // }
    }


}
int main()
{
    std::cout << "how much operator give array ?" << '\n';
    std::cin >>count;
    
    int *arr;
    int *arr2;
    arr=(int*)malloc(sizeof(int)*count);
    arr2=(int*)malloc(sizeof(int)*count);

    for (size_t i = 0; i < count; i++)
    {   
        int val;
        std::cout << "array " << i+1 << '\n';
        std::cin >> val;    
        *(arr+i)=val;
        *(arr2+i)=val;
    }
    std::sort(arr,arr+count);
    std::sort(arr2,arr2+count);
    std::reverse(arr,arr+count);
    std::reverse(arr2,arr2+count);
    printf_val(arr,arr2);
    
}