#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    /**
     * This example give our value adress and value
     * 
     */
    
    template <size_t T> int arr[T];


    int *ptr=arr;
    int total;
    int *ptr;
    int val;


    total=3200;
    ptr=&total;
    val= *ptr;

    /**
     * Total value is 3200
     * Get Adress value is 0x6dfee4 
     */
    
    cout<< "Total value is "<< val << endl;
    cout <<"Get Adress value is " << &total;
    return 0;
}
